#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: str
 * Return: pointer to d.
 */
char *_strdup(char *str)
{
	unsigned int i, n = 0, g;
	char *d;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	n = n + 1;
	d = malloc(sizeof(char) * n + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	for (g = 0; g <= n - 1; g++)
	d[g] = str[g];
	return (d);
}
