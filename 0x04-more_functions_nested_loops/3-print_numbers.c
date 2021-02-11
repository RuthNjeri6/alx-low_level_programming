#include "holberton.h"
/**
  * print_numbers - prints numbers from 0 - 9
  * @void: no paremeters
  *
  * Return: nothing
  */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
