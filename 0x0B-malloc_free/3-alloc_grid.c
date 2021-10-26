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
	int i;
	int **d;

	d = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(sizeof(int) * height); 
	}
	return (d);
}
