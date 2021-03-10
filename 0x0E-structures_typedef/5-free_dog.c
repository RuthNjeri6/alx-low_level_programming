#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - frees memory allocated to a struct
  * @d: pointer to struct
  *
  * Return: none
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}
}
