#include "main.h"

/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
int i = 0;
int j;
int a = 0;
char c;
int b;
while (s[i] != 0)
{
	a++;
	i++;
}
if (a > 0)
{
if (a % 2 != 0)
{
a = a - 1;
b = a;
for (j = 0; j < (a / 2) ; j++)
{
	c = s[b];
	s[b] = s[j];
	s[j] = c;
	b--;
}
}
else
{
b = a - 1;
for (j = 0; j < (a / 2) ; j++)
{
	c = s[b];
	s[b] = s[j];
	s[j] = c;
	b--;
}
}
}
}
