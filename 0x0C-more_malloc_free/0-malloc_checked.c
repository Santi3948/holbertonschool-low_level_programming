#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - writes the character c to stdout
 * @b: The character to print
 * Return: On success 1.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return(ptr);
}
