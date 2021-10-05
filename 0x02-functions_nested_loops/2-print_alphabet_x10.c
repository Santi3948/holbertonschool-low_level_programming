#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* alphabet x10 - alphabet x10
* Return: alphabet x10
*/
void print_alphabet_x10(void)
{
char a;
char b;
for (b = 1; b <= 10; b ++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
