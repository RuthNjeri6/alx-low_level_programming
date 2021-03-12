#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_strings - prints strings passed as arguments
  * @separator: first parameter
  * @n: second parameter
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	static unsigned int i;
	static char *s;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(op, char*);
		if (s == 0)
		{
			printf("(nil)");
			if (i != (n - 1) && separator)
				printf("%s", separator);
		}
		else
		{
			printf("%s", s);
			if (i != (n - 1) && separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(op);
}
