#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  * print_all - prints all type of arguments
  * @format: first parameter
  *
  * Reutrn: void
  */
void print_all(const char * const format, ...)
{
	va_list op;
	int i, j;
	char c, *s;
	float f;

	va_start(op, format);
	j = 0;
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 's':
				s = va_arg(op, char *);
				printf("%s", s);
				break;
			case 'i':
				i = va_arg(op, int);
				printf("%d", i);
				break;
			case 'c':
				c = (char) va_arg(op, int);
				printf("%c", c);
				break;
			case 'f':
				f = (float) va_arg(op, double);
				printf("%f", f);
				break;
			default:
				break;
		}
		j++;
	}
	printf("\n");
}
