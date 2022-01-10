#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  function that gets the length of a prefix substring
 * @s: initial segment of
 * @accept: only of bytes from
 * Return: Returns the number of bytes in
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
int n = 0;
for (i = 0; s[i] != 0; i++)
{
for (j = 0; accept[j] != 0; j++)
{
if (s[i] == accept[j])
{
n++;
}
}
if (n == 1)
return (&s[i]);
}
return (0);
}
