#include "main.h"

/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
int a = 0;
int b;
char c;
int d = 0;
while (*(s + a) != 0)
{
a++;
}
b = a;
while (*(s + b - 1) != *(s + (a / 2)))
{
c = *(s + b - 1);
*(s + b - 1) = *(s + d);
*(s + d) = c;
d++;
b--;
}
}
