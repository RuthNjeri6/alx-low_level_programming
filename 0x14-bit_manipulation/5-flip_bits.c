#include "holberton.h"
/**
  * flip_bits - counts numbet of bita to be flip
  * @n: first number
  * @m: second number
  *
  * Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	count = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
