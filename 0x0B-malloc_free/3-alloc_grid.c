#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width: str
 * @height: dou
 * Return: pointer to d.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **d;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	d = malloc(height * sizeof(int *));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{	for (j = 0; j < width)
		{
		d[i] = malloc(sizeof(int) * width);
		}
	}
	return (d);
}
