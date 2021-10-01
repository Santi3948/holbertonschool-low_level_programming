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
for (c = 48 ; c <= 57 ; c++)
{
putchar (c);
if (c <= 56)
{
putchar (44);
putchar (32);
}
}
putchar (10);
return (0);
}
