#include <stdio.h>
/**
 * main - program prints the size of various computer types
 * Return: 0 (Successful)
 */
int main(void)
{
char c;
int i;
long int l;
long long int m;
float f;

printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %i byte(s)\n", (unsigned int)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %llu byte(s)\n", (unsigned long long)sizeof(m));
printf("Size of a float: %f byte(s)\n", (float)sizeof(f));
return (0);
}
