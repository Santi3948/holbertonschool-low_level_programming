#include "main.h"
#include <stdio.h>

/**
 * print_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
if (n > 0)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
}
else
{
	printf("\n");
}
}
