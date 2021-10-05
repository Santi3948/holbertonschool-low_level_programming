#include "main.h"

/**
* print_last_digit - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
*/
int print_last_digit(int c)
{
int d = (c % 10);
if (d >= 0)
{
_putchar('0' + d);
return (d);
}
else
{
d = (d * (-1));
_putchar('0' + d);
return (d);
}
}
