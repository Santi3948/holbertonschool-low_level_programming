#include "main.h"
/**
 * malloc_checked - writes the character c to stdout
 * @b: The character to print
 * Return: On success 1.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;
	ptr = malloc(sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	*ptr = b;
	exit(ptr);
}
