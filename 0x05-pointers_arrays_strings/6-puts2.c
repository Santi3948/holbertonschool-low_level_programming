#include "main.h"

/**
 * puts2 - writes the character c to stdout
 * @str: The character to print.
 */
void puts2(char *str)
{
int a = 0;
while (*(str + a))
{
_putchar(*(str + a));
a = a + 2;
}
}
