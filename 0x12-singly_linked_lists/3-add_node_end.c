#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
  * _strlen - gets length of string
  * @str: pointer to string
  *
  * Return: len of string
  */
int _strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
  * add_node_end - adds node at the end of a list
  * @head: pointer to head of list
  * @str: string in a node
  *
  * Return: pointer to new element/node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->next = NULL;
		if (str != NULL)
		{
			new_node->len = _strlen(str);
			new_node->str = strdup(str);
		}
		else
		{
			return (NULL);
		}
		*head = new_node;
		return (*head);
	}
	last_node = (*head);
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	new_node->next = NULL;
	if (str != NULL)
	{
		new_node->len = _strlen(str);
		new_node->str = strdup(str);
	}
	else
	{
		return (NULL);
	}
	last_node->next = new_node;
	return (last_node->next);
}

