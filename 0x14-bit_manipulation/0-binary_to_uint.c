#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * binary_to_uint - binary to unsigned int
 * @b: binary
 * Return: the unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int j = 0, i;

	for (i = strlen(b) - 1; i >= 0; i--, j++)
	{
		if (b[i] == '1')
		ui += pow(2, j);
	}
	return (ui);
}
