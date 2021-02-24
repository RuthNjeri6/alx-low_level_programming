#include "holberton.h"
/**
  * _puts_recursion - prits a string
  * @s: params pointer to a character
  *
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\0');
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
