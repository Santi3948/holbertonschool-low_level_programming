#include "main.h"
/**
 * leet - capita
 * @c: pointer
 * Return: s
 *
 */
char *leet(char *c)
{
char a[] = {'4', '3', '0', '7', '1'};
char b[] = {'a', 'e', 'o', 't', 'l'};
char d[] = {'A', 'E', 'O', 'T', 'L'};
int i, j;
for (i = 0; c[i] != 0; i++)
{
for (j = 0; b[j] != 0; j++)
{
if (c[i] == b[j] || c[i] == d[j])
c[i] = a[j];
}
}
return (c);
}
