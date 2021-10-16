#include "main.h"

/**
 * cap_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
int i, j;
int sep[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
for (i = 0; s[i] != 0; i++)
{
for (j = 0; sep[j] != 0; j++)
{
	if ((sep[j] == s[i]) && (s[i + 1] != 0) && (s[i] >= 97 && s[i] <= 122))
	{
		s[i] = s[i] - 32;
	}
}
}
return (s);
}
