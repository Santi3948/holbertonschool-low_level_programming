#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: initial segment of
 * @accept: only of bytes from
 * Return: Returns the number of bytes in
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int n = 0;
for (i = 0; s[i] != 0; i++)
{
for (j = 0; accept[j] != 0; j++)
{
if (s[i] == accept[j])
{
n++;
}
}
if ((n - 1) != i)
break;
}
return (n);
}
