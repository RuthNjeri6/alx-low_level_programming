#include "holberton.h"
/**
  * print_most_numbers - print most numbers
  * @void: none
  *
  * Return: nothing
  */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
