#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
  * list_len - gets length of list
  * @h: pointer to a list
  *
  * Return: length of list
  */
size_t list_len(const list_t *h)
{
	static unsigned int i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
