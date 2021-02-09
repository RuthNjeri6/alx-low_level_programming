#include "holberton.h"
/**
  * jack_bauer - prints every minute of the day
  * @void: no parameters
  *
  * Return: nothing
  */
void jack_bauer(void)
{
	int i = 0;
	int j, k;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
		}
	}
}
