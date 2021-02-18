#include "holberton.h"
/**
  * print_rev - print string in reverse
  * @s: argument
  *
  * Return: void
  */
void print_rev(char *s)
{
	int length, i;
	char *tmp;

	tmp = s;
	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = length; i > 0; i--)
	{
		_putchar(*(tmp + i));
	}
	_putchar('\n');
}
