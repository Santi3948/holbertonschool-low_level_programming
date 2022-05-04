#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: function must return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int mid;
	int left = 0;
	int right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", i);
		printf("%d\n", i);
		mid = left + ((right - left) / 2);
		if (array[mid] == value)
		{
			return (mid);
		} else if (value < array[mid])
		{
			right = mid - 1;
		} else
		{
			left = mid + 1;
		}
	}
	return (-1);
}

