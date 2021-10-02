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
	int c;
	int d = 49;
	int e;
	int f;
	int g;
for (c = 48 ; c <= 55 ; c++)
{
for (e = 49 ; e <= 57 ;)
{
for (f = g ; f <= 57; f++)
{
putchar (c);
putchar (e);
putchar (f);
if (c < 57)
{
putchar (44);
putchar (32);
}
f++;
}
g++;
}
}
putchar (10);
return (0);
}
