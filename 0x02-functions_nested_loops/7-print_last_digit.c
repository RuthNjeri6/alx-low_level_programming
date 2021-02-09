#include "holberton.h"
/**
  * print_last_digit - prints the last digit of a number
  * @n: takes integer parameter
  *
  * Return: integer last digit
  */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		n *= -1;
		result = n % 10;
		_putchar(result + '0');
	}
	else
	{
		result = n % 10;
		_putchar(result + '0');
	}
	return (result);
}
