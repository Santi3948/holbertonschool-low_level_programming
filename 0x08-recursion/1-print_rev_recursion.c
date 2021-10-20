#include "main.h"

/**
 * _print_rev_recursion - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
int i = 0;
if (s[i] != 0)
{
	_print_rev_recursion(&s[i + 1]);
	_putchar(s[i]);
}
}
