#include <stdio.h>
/**
 * main - print alphabet in lowercase
 * Return: 0
 */
char main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
