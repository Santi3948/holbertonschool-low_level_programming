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
	int a = 0;
	int b = 0;
for (c = 48 ; c <= 55 ; c++)
{
for (e = 49 + a ; e <= 56 ; e++)
{
for (f = 50 + b ; f <= 57; f++)
{
putchar (c);
putchar (e);
putchar (f);
if (c < 55)
{
putchar (44);
putchar (32);
}
}
b++;
}
a++;
}
putchar (10);
return (0);
}
