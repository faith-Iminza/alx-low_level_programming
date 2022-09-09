#include <stdio.h>

/**
 *main - entry point
 *Return: Always 0 (success)
 */

int main(void)
{
char letters;

for (letters = 122; letters >= 97; letters--)
{
putchar(letters);
}

putchar('\n');

return (0);
}
