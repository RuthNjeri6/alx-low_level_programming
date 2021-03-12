#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
  * main - check user inputs
  * @argc: first parameter
  * @argv: second parameter
  *
  * Return: result
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	s = op[0];

	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = 0;

	result = (*get_op_func(op))(num1, num2);
	printf("%d\n", result);

	return (0);
}
