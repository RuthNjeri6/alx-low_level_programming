#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main function
* @void: takes no parametors
*
* Return: 0 and the end
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		print("%d is zero\n", n);
	return (0);
}
