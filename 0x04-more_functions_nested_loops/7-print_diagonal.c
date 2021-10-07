#include "main.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 */
void print_diagonal(int n)
{
int a;
int b;
if (n > 0)
{
	_putchar(92);
	_putchar(10);

for (a = 2; a <= n; a++)
{
	for (b = 2; b <= a; b++)
	_putchar(' ');
	_putchar(92);
	_putchar(10);
}
}
else
{
	_putchar(10);
}
}
