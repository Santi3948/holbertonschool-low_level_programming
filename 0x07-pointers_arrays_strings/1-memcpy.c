#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area 
 * @src: memory area
 * @n: copies n bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
