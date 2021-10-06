#include "main.h"
/**
 * times_table - writes the character c to stdout
 * Return: On success 1.
 */
void times_table(void)
{
int a,b,c;
c = -1;
for (b = 1; b <= 10; b++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
c = c + 1;
for (a = 1; a <= 9; a++)
{
c = c + c;
_putchar('c');
_putchar(',');
_putchar(' ');
}
}
}
