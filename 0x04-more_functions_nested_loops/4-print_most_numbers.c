#include "main.h"
#include <stdio.h>

/**
 * * more_numbers - prints numbers from 0 to 9 excluding 2 and 4
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}

	_putchar ('\n');
}
