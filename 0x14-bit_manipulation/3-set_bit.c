#include "holberton.h"
/**
  * set_bit - sets nth bit to 1
  * @n: points to number
  * @index: index of bit
  *
  * Return: int
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return (*n |= (1 << index));
}
