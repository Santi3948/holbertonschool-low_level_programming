#include "main.h"

/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
int a = 0;
while (str[a] != 0)
{
a++;
}
a = (a / 2);
while (str[a] != 0)
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
