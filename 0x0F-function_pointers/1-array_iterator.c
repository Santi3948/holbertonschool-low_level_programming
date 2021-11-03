#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print name
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
