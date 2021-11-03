#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - print name
 * @cmp: cmp
 * @size: name
 * @array: f
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
	return (-1);
	if (array || cmp)
	{
	for (i = 0; i < size ; i++)
	{
	x = cmp(array[i]);
	if (x == 1)
	return (i);
	}
	}
	return (-1);
}
