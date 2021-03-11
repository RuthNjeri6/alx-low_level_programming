#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - computes the sum of variable arguments
  * @n: first argument
  *
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	static unsigned int i;
	static int sum;

	if (n == 0)
	{
		va_end(0);
		return (0);
	}
	va_start(op, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(op, int);
	}
	va_end(op);
	return (sum);
}
