#include "holberton.h"
/**
  * clear_bit - clear nth bit to 0
  * @n: points to number
  * @index: index of bit
  *
  * Return: int
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
