#include "main.h"
/**
 * more_numbers - writes the character c to stdout
 * Return: On success 1.
 */
void more_numbers(void)
{
int c;
int d;
for (d = 0; d < 10; d++)
{
for (c = 0; c <= 14; c++)
{
	if (c >= 10)
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
}
_putchar(10);
}
}
