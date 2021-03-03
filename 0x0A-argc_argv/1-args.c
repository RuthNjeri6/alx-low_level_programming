#include <stdio.h>
/**
  * main - print number of arguments
  * @argc: First parameter
  * @argv: Second parameter
  *
  * Return: integer
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
