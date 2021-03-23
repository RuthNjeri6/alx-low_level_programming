#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints int data in alinked list
  * @h: head of the linked list
  *
  * Return: signed long int
  */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
