#include <stdio.h>
/**
 * main - program prints the size of various types of integers
 * Return: 0 (Successful)
 */
int main(void)
{
char c;
int i;
long int l;
long long int a;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %i byte(s)\n", (unsigned int)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %llu byte(s)\n", (unsigned long long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (float)sizeof(f));
return (0);
}
