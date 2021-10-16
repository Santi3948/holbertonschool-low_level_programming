#include "main.h"

/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
int j;
int c;
int b;
if (n > 0)
{
if (n % 2 != 0)
{
n = n - 1;
b = n;
for (j = 0; j < (n / 2) ; j++)
{
	c = a[b];
	a[b] = a[j];
	a[j] = c;
	b--;
}
}
else
{
b = n - 1;
for (j = 0; j < (n / 2) ; j++)
{
	c = a[b];
	a[b] = a[j];
	a[j] = c;
	b--;
}
}
}
}
