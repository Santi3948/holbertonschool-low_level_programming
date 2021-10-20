#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - finds the first occurrence of the substring
 * @a: string to be evaluated
 *
 * Return: pointer to dest.
 */

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 7; i++)
{
	for (j = 0; j < 7; j++)
	{
		printf("%c", a[i][j]);
	}
}
}
