#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
  * add_node - inserts a node infront
  * @head: pointer to head of list
  * @str: pointer to string
  *
  * Return: pointer to node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return ((*head));
}
