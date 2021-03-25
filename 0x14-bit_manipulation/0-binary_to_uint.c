#include <stdio.h>
#include "holberton.h"
/**
  * _strlen - co mputes length of string
  * @str: points to the string
  *
  * Return: int
  */
int _strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
  * _pow - computers power
  * @a: first parameter
  * @b: second parameter
  *
  * Return: int
  */
int _pow(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * _pow(a, b - 1));
}
/**
  * binary_to_uint - converts an 8 bit binary number to unsign integer
  * @b: points to the 8 bit binary number
  *
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, sum;
	int len, i;

	if (b == NULL)
		return (0);
	sum = 0;
	len = _strlen(b);
	count = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count = (len - 1) - i;
		if (b[i] == '1')
		{
			sum += _pow(2, count);
		}
	}
	return (sum);
}
