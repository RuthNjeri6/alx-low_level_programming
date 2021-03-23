#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - deletes node at a specified index
* @head: points to list
* @index: integer
*
* Return: integer 1, 0r -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	temp2 = temp->next->next;
	free(temp->next);
	temp->next = temp2;
	return (1);
}
