#include <stdio.h>
/**
  * main - prints program name
  * @argc: first parameter
  * @argv: second parameter
  *
  * Return: integer
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
