#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - writes the character c to stdout
 * @min: The character to print
 * @max: asd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
	int *p, n;

	if (min > max)
	return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
	{
	return (NULL);
	}
	for (n = 0; n < (max - min + 1); n++)
	p[n] = n + min;
	return (p);
}
