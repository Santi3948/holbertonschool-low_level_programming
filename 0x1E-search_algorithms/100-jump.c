#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers using JSA
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:is the value to search for
 * Return: return the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int i = 0;
	int size_int = (int) size;

	if (!array)
		return (-1);
	while (i < size_int)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] <= value && (!array[i + jump] || array[i + jump] >= value))
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
			break;
		}
		i = i + jump;
	}
	while (i < size_int)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
