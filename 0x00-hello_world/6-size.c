#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 when successful
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %d byte(s)\n", (unsigned long) sizeof(d));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %d byte(s)\n", (unsigned long)(b));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
