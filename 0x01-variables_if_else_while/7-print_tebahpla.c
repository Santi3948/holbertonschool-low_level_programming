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
int sal = 10;
for (c = 122 ; c <= 97 ; c--)
{
putchar (c);
}
putchar(sal);
return (0);
}
