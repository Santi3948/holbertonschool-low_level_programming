#include "main.h"

/**
 * factorial - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
int x;
if (n > 0)
{
x = n * factorial(n - 1);
return (x);
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
