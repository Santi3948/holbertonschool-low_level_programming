#include "main.h"
/**
 * print_line - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar('_');
}
}
_putchar(10);
}
