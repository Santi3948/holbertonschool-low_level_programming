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
char sal = '\n';
for (c = 48 ; c <= 57 ; c++)
{
putchar (c);
}
for (c = 97; c <= 102 ; c++)
{
putchar (c);
}
putchar(sal);
return (0);
}
