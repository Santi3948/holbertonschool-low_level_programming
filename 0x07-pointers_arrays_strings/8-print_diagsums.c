#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - finds the first occurrence of the substring
 * @a: string to be evaluated
 * @size: string to be evaluated
 * Return: pointer to dest.
 */

void print_diagsums(int *a, int size)
{
int i, j, k;
int n = 0;
int x = 0;
for (i = 0; i < size; i++)
{
	k = (i * size) + i;
	n += a[k];
}
for (j = 1; j <= size; j++)
{
	k = (j * size) - j;
	x += a[k];
}
printf("%d, %d\n", n, x);
}
