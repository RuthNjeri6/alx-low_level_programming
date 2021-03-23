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
	free(head);
}
