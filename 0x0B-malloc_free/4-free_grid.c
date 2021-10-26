#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - check the code
 * @grid: str
 * @height: dou
 * Return: pointer to d.
 */
void free_grid(int **grid, int height)
{
	int i;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
