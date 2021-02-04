#include<stdio.h>
/**
  * main - prints sizes of data types
  * @void: does not take any parametors
  *
  * Return: 0 at the end
  */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
