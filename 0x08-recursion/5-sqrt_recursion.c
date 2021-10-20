#include "main.h"
/**
 *  _sqrt - returns the natural square
 *@n: square root
 *@i: inte
 *Return: natural
 */

int _sqrt(int i, int n)
{

	if (i * i == n)
	{
	return (i);
	}
	else if (i > n / 2)
	{
	return (-1);
	}
	else
	{
	return (_sqrt(i + 1, n));
	}
}

/**
 *  _sqrt_recursion - ashe
 *@n: square root
 *Return: natural
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
