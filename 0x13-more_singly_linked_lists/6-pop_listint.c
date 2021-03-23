#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - delete node from begining
  * @head: pointer to head
  *
  * Return: integer
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	if (temp->next == NULL)
	{
		n = temp->n;
		*head = NULL;
		free(temp);
		return (n);
	}
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
