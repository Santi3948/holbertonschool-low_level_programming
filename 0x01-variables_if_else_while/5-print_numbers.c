#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - numbers
* Return: numbers
*/
int main(void)
{
char c;
char sal = '\n';
for (c = 0 ; c <= 9 ; c++)
{
printf("%d",c);
}
putchar(sal);
return (0);
}
