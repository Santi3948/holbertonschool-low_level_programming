#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *d = malloc(sizeof(char) * size);

	if (size == 0)
	{
	return (NULL);
	}
	for (i = 0; i <= size - 1; i++)
	d[i] = c;
	return (d);
}
