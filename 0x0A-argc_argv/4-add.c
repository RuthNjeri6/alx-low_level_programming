#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - adds numbers passed as arguments
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: 0 if successful, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		exit(0);
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
