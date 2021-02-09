#include "holberton.h"
/**
  * print_sign - prints +, 0 or -
  * @c: yakes integer argument
  *
  * Return - 0, 1, -1
  */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}	
