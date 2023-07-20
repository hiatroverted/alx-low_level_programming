#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *@n: the number of times character _ is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
		return;
	}

	while (n > 0)
	{
		_putchar ('_');
		n--;
	}
}
