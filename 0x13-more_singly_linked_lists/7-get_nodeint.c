#include "lists.h"
/**
  * get_nodeint_at_index - returns nth node of a list
  * @head: head of a list
  * @index: index of node
  *
  * Return: pointer to nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	i = 0;
	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
