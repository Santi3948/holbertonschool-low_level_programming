#include "search_algos.h"
/**
 * binarySearch - searches for a value in a sorted array of integers using BSA
 * @arr: pointer to the first element of the array to search in
 * @l: pointer to the first element of the array to search in
 * @r: is the number of elements in array
 * @x: is the value to search for
 * Return: function must return the index where value is located
 */
int binarySearch(int arr[], int l, int r, int x)
{
	int i;

	if (r >= l) {
		int mid = l + (r - l) / 2;
 	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: function must return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	return (binarySearch(array, 0, size - 1, value));
}

