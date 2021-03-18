#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
  * _strlen - gets string length
  * @str - first
  *
  * Return: int
  */
int _strlen(const char *str)
{
	static int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
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
	if (*head == NULL)
	{
		new_node->next = NULL;
		if (str != NULL)
		{
			new_node->str = strdup(str);
			new_node->len = _strlen(str);
		}
		else
		{
			return (NULL);
		}
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	if (str != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}
	else
		return (NULL);
	*head = new_node;
	return (*head);
}
