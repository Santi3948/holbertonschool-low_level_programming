#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i;
for (i = 0; s[i] != 0 && s[i] != c; i++)
;
	if (s[i] == c)
	{
		return (&s[i]);
	} else if (s[i] == 0)
	{
		return (NULL);
	}
	return (0);
}
