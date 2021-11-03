#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - op
 * @b: b
 * @a: a
 * Return: int
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - op
 * @b: b
 * @a: a
 * Return: int
 */

int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - op
 * @b: b
 * @a: a
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - op
 * @b: b
 * @a: a
 * Return: int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 * op_mod - op
 * @b: b
 * @a: a
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
