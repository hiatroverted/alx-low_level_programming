#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 1 to 100, followed by new line
 * but for multiples of three print Fizz and five print Buzz
 * for both print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("d%", i);
		}
	}

	printf("\n");
	return (0);
}
