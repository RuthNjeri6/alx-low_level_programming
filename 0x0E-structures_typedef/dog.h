#ifndef _DOG_H_
#define _DOG_H_

/**
  * struct dog - contains dogs age, name and owner
  * @name: first element
  * @age: second element
  * @owner: third element
  *
  * Describtion: struct containg 3 elements
  * one of float the others of type pointer to char
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */