#include "function_pointers.h"
/**
  * array_iterator - executes a functio given as parameter
  * @array: pointer to int
  * @size: size of array
  * @action: pointer to function
  *
  * Return: none
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	static unsigned int i;

	if (array == 0 || size <= 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
