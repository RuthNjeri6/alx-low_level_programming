#include "function_pointers.h"
/**
  * print_name - prints name
  * @name: first parameter
  * @f: second parameter
  *
  * Return: none
  */
void print_name(char *name, void (*f)(char *))
{
	if ( f == 0)
		return;
	f(name);
}
