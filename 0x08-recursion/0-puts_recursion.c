#include "main.h"

/**
 * _puts_recursion - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] != 0)
{
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
} else
{
	_putchar(10);
}
}
