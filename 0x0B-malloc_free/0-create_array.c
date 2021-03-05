#include <stdlib.h>
/**
  * create_array - creates array of characters
  * @size: first parameter
  * @c: second parameter
  *
  * Return: a pointer to character
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
