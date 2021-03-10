#include "function_pointers.h"
/**
  * int_index - searches for an int
  * @array: pointer to array of ints
  * @size: size of array
  * @cmp: function pointer
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	static int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
