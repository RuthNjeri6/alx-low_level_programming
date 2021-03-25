#include "holberton.h"
/**
  * get_bit - gets nth bit of a number
  * @n: number
  * @index: index of bit
  *
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	return ((n >> index) & 1);
}
