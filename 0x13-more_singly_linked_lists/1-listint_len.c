#include <stddef.h>
#include "lists.h"
/**
  * listint_len - computes len of a linked list
  * @h: head of the linked list
  *
  * Return: size_t
  */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
