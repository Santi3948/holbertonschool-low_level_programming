#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - writes the character c to stdout
 * @n: The character to print
 * Return: On success 1.
 */
void print_to_98(int n)
{
if (n < 98)
{
	for (n = n; n < 98; n++)
	{
	printf("%d, ", n);
	}
	printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
}
printf("%d\n", 98);
}
}
