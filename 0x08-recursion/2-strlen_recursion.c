#include "main.h"

/**
 * _strlen_recursion - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
int i = 0;
int j;
if (s[i] != 0)
{
	i++;
	j = _strlen_recursion(&s[i]) + 1;
	return (j);

}
else
{
	return (0);
	_putchar(10);
}
}
