#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint_end - insert node at the end of a list
  * @head: pointer to list
  * @n: integer
  *
  * Return: pointer to new node, NULL if fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	last = *head;
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	new->n = n;
	new->next = NULL;
	last->next = new;
	return (last->next);
}
