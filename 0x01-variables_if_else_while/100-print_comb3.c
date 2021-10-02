#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - alphabet
* Return: alphabet
*/
int main(void)
{
int d = 49;
int e;
for (c = 48 ; c <= 56 ; c++)
{
for (e = d ; e <= 57 ;)
{
putchar (c);
putchar (e);
if (c < 56)
{
putchar (42);
putchar (32);
}
}
d--;
}
putchar (10);
return (0);
}
