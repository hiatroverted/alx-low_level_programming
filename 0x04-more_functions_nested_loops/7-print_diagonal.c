#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal line in the terminal
 * @n: number of times character \ is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}
	int i, j;

	for (i = 0; j < i; j++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
}
