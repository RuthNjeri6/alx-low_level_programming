#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - adds 2 integers
  * @a: first int
  * @b: second int argument
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts two integers
  * @a: first parameter
  * @b: second parameter
  *
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies 2 integers
  * @a: first int
  * @b: second int
  *
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divides 2 ints
  * @a: first
  * @b: second
  *
  * Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - gets modulus of 2 ints
  * @a: first parameter
  * @b: second parameter
  *
  * Return: a% b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
