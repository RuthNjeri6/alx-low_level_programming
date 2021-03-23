#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint - inserts a node at the beginning of a list
  * @head: pointer to head
  * @n: integer
  *
  * Return: pointer to a node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
