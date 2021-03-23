#include "lists.h"
/**
  * sum_listint - computes the sum of all the data in all node of a list
  * @head: pointer to first node of a list
  *
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += (head->n);
		head = head->next;
	}
	return (sum);
}
