#include "main.h"

/**
 * _strcat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
int i, n;
for (n = 0; dest[n] != 0; n++)
{
}
for (i = 0; src[i] != 0; i++)
{
dest[n] = src[i];
n++;
}
return (dest);
}
