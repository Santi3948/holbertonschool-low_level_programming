#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - writes the character c to stdout
 * @s1: asd
 * @s2: asd
 * @n: asd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lon1, lon2, c, d;
	char *con;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (lon1 = 0; s1[lon1]; lon1++)
	{
	}

	for (lon2 = 0; s2[lon2]; lon2++)
	{
	}

	if (n >= lon2)
	n = lon2;

	con = malloc(sizeof(char) * (n + lon1) + 1);
	if (con == NULL)
	return (NULL);

	for (c = 0; c < lon1; c++)
	con[c] = s1[c];

	for (d = c; d < (c + n); d++)
	con[d] = s2[d - c];

	con[d] = 0;

	return (con);
}
