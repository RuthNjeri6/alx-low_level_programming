#include <stdio.h>
/**
  * main - prints all arguments
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: integer
  */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
