#include <stdlib.h>
#include "lists.h"
/**
  * free_listint2 - frees list and sets head to NULL
  * @head: points to head of list
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	current  = *head;
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
	*head = NULL;
}
