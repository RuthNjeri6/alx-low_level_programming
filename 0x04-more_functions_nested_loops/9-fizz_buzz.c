#include <stdio.h>
/**
  * main - prints numbers 0-100 with a twist
  * @void: takes no paremeters
  *
  * Return: 0 upon successful run
  */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			if (num % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		if (num % 5 == 0)
		{
			if (num % 3 == 0)
				printf("FizzBuzz ");
			else
				printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
