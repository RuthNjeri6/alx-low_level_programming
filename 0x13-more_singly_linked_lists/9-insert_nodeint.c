#include <stdlib.h>
#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a specified index
  * @head: pointer to list
  * @idx: index of new node
  * @n: data of new node
  * Return: pointer to new node if successful, NULL if fails
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	i = 0;
	current = *head;
	while (current != NULL)
	{
		if (i == (idx - 1))
		{
			prev = current;
			new->next = prev->next;
			prev->next = new;
			new->n = n;
			return (new);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
