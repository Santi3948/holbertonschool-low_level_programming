#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 */
void print_to_98(int n)
{
int a;
if (n >= 98)
{
for (a = n; a >= 98; a--)
{
	printf("%d, ", a);
	if (a != 98)
	{
	_putchar(',');
	_putchar(' ');
	}
}
}
else if (n < 98)
{
for (a = n; a <= 98; a++)
{
	printf("%d, ", n);
	if (a != 98)
	{
	_putchar(',');
	_putchar(' ');
	}
}
}

}
