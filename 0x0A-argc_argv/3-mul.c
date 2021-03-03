#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiply two numbers
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: 0 if successful
  */
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
