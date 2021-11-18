#include "main.h"
/**
 * _pow - returns x ^ n
 * @x: base number
 * @n: exponent
 * Return: x ^ n
 */
int _pow(int x, int n)
{
	int i, res = 1;

	for (i = 0; i < n; i++)
		res *= x;

	return (res);
}
/**
 * binary_to_uint - binary to unsigned int
 * @b: binary
 * Return: the unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int j = 0, i;

	if (!b)
		return (ui);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	for (; i >= 0; i--, j++)
	{
		if (b[i] == '1')
		ui += _pow(2, j);
	}
	return (ui);
}
