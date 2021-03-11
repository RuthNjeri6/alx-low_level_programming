#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints arguments
  * @separator: first argument
  * @n: Second argument
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list op;
	static unsigned int i;

	if (separator == NULL)
	{
		va_end(op);
		return;
	}

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(op);
}
