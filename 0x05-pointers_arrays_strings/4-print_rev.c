#include "main.h"

/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
int a = 0;
while (*(s + a) != 0)
{
a++;
}
while (*(s + a - 1) != 0)
{
_putchar(*(s + a - 1));
a--;
}
_putchar('\n');
}
