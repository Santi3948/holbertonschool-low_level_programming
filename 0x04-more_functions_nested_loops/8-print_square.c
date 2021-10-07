#include "main.h"
/**
 * print_square - writes the character c to stdout
 * @size: The character to print
 * Return: On success 1.
 */
void print_square(int size)
{
int a;
int b;
if (size <= 0)
{
_putchar(10);
}
else if (size > 0)
{
for (a = 1; a <= size; a++)
{
	for (b = 1; b <= size; b++)
	{
	_putchar(35);
	}
	_putchar(10);
}
}
}
