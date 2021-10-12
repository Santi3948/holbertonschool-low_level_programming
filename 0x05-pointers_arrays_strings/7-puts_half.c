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
if (a % 2 == 0)
{
a = (a / 2);
while (str[a] != 0)
{
_putchar(str[a]);
a++;
}
}
else
{
	a = (a / 2);
	while (str[a + 1] != 0)
	{
		_putchar(str[a + 1]);
		a++;
	}
}
_putchar('\n');
}
