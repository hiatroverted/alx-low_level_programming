#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random number to a variable to be executable
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n)
	}

	return (0);
}

