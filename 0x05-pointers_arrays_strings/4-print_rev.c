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

	length = 0;
	while (s[length] != '\0')
	{
		++length;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(s[(length - 1) - i]);
	}
	_putchar('\n');
}
