#include <stdio.h>
/**
  * print_to_98 - prints from into number to 98
  * @n: takes an integer as argument
  *
  * Return: nothing
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				printf(", ");
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d", n);
				printf(", ");
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
		printf("\n");
	}
}
