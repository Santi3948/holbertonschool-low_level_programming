#include "search_algos.h"
/**
 * interpolation_search - searches a value in a sorted array using ISA
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	if (!array || !size || !value)
		return (-1);
	while ((array[high] != array[low]))
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, value);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
		if (array[low] > value || array[high] < value)
			return (-1);
	}
	if (value == array[low])
		return (low);
	return (-1);
}
