#include <stdlib.h>
#include "lists.h"
/**
  * free_listint - frees list
  * @head: pointer to fiest node of list
  *
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *current;
	current = head;
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
