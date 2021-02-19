#include "holberton.h"
/**
  * puts_half - prints 2nd half of a string
  * @str: char pointer paramenter
  *
  * Return: void
  */
void puts_half(char *str)
{
	int len, half_len, i;
	char *tmp;

	len = 0;
	tmp = str;

	while (*str != 0)
	{
		len++;
		str++;
	}

	if (len % 2 == 0)
	{
		half_len = len / 2;
		for (i = half_len; i < len; i++)
		{
			_putchar(*(tmp + i));
		}
	}
	else
	{
		half_len = (len - 1) / 2;
		for (i = half_len; i < len; i++)
		{
			_putchar(*(tmp + i));
		}
	}
	_putchar('\n');
}
