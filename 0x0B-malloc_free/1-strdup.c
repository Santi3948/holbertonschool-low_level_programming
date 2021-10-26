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
	int i, n = 0, g;
	char *d;

	for (i = 0; str[i]; i++)
	n = n + 1;
	d = malloc(sizeof(char) * n);
	for (g = 0; g <= n - 1; g++)
	d[g] = str[g];
	if (str == NULL || d == NULL)
	{
	return (NULL);
	}
	return (d);
}
