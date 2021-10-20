#include "main.h"

/**
 * _pow_recursion - writes the character c to stdout
 * @x: The character to print
 * @y: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	int z;
if (y > 0)
{
z = x * _pow_recursion(x, y - 1);
return (z);
}
else if (y == 0)
}
return (1);
}
else
{
return (-1);
}
}
