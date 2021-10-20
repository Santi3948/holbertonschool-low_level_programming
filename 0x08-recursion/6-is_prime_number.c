#include "main.h"
/**
 *  _prime - returns the natural square root of a number.
 *@n: square root this.
 *@i: integer.
 *Return: natural square root
 */

int _prime(int i, int n)
{

	if (i <= (n / 2))
	{
		if (n % i == 0)
		{
			return (0);
		}
			return (_prime(i + 1, n));
	}
	else
	{
	if (n > 1)
	{
	return (1);
	}
		return (0);
	}
}

/**
 *  is_prime_number - returns the natural square root of a number.
 *@n: square root this.
 *Return: natural square root
 */

int is_prime_number(int n)
{
	return (_prime(2, n));
}
