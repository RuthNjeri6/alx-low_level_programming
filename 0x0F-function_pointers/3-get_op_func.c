#include "3-calc.h"
#include <stddef.h>

/**
  * get_op_func - select operation function to be performed
  * @s: first argument
  *
  * Return: int function pointer
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL && ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
