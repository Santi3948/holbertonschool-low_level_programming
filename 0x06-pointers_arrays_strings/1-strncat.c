#include "main.h"

/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;
for (c = 0 ; dest[c] != 0 ; c++)
	{
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[c] = src[i];
		c++;
	}
	return (dest);
}
