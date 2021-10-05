#include "main.h"

/**
* print_last_digit - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
*/
int print_last_digit(int c)
{
int d;
if (c >= 0)
{
	d = (c % 10);
	_putchar(d);
	return (d);
}
else
{
d = ((c * (-1)) % 10);
_putchar(d);
return (d);
}
}
