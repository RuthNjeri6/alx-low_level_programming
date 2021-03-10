#include "dog.h"
#include <stdio.h>
/**
  * print_dog - prints elements of a struct
  * @d: pointer to struct
  *
  * Return: none
  */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d == NULL)
		printf("Name: (nil)\n");
	if (!(d->age) || d == NULL)
		printf("Age: (nil)\n");
	if (d->owner == NULL || d == NULL)
		printf("Owner: (nil)\n");
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (d->age)
		printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
