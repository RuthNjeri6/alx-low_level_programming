#include "holberton.h"
/**
  * print_line - prints a stright line
  * @n: takes integer argument
  *
  * Return: nothing
  */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
