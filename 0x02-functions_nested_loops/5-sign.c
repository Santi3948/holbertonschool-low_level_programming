#include "main.h"
/**
* print_sign - writes the character c to stdout
* @n: The character to print
* Return: On success 1.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else
if (n == 0)
{
_putchar('0');
}
else
{
_putchar('-');
}
return n;
_putchar(' ');
}
