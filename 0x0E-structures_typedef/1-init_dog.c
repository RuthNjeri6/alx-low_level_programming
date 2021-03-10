#include "dog.h"
/**
  * init_dog - inilializes a struct
  * @d: first parameter
  * @name: second parameter
  * @age: second parameter
  * @owner: fourth parameter
  *
  * Return: none
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
