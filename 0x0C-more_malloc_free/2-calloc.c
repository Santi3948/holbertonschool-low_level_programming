#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - writes the character c to stdout
 * @nmemb: The character to print
 * @size: asdff
 * Return: On succ
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *call;
unsigned int a;

if (nmemb == 0 || size == 0)
return (NULL);
call = malloc(size * nmemb);
if (call == 0)
return (NULL);
for (a = 0; a < (nmemb * size); a++)
call[a] =  0;
return ((void *)call);
}
