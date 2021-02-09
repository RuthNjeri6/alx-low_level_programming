#include "holberton.h"
/**
  * print_alphabet - prints a to z
  * @void: does not take any arguments
  *
  * Return: does not retutn anything
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
