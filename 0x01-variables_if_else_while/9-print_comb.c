#include <stdio.h>
/**
  * main - function main
  * @void: no parametors
  *
  * Return: 0
  */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		for (j = 0; j < 10; j++)
		{
			putchar(j);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
