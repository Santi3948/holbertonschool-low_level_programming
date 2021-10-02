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
	int e;
	int f;
	int g = 50;
	int h = 49;
for (c = 48 ; c <= 55 ; c++)
{
for (e = h ; e <= 56 ;)
{
for (f = g ; f <= 57;)
{
putchar (c);
putchar (e);
putchar (f);
if (c < 55)
{
putchar (44);
putchar (32);
}
f++;
}
g++;
e++;
}
h++;
if (h == 57)
{
h = 49;
}
}
putchar (10);
return (0);
}
