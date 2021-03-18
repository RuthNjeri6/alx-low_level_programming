#include <stdio.h>
#include "lists.h"
/**
  * print_list - function to print elements in a linked list
  * @h: pointer to a struct
  *
  * Return: number of nodes in a linked list
  */
int print_list(const list_t *h)
{
	static unsigned int i;

	i = 0;
	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
