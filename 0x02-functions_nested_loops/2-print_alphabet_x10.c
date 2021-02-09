#include "holberton.h"
/**
  * print_alphabet_x10 - prints the alphabet letters 10 times
  * @void: takes no parameters
  *
  * Return: returns nothing
  */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
