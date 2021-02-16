#include "holberton.h"
/**
  * puts2 - print every other character of a string
  * @str: first argument
  *
  * Return: none
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
