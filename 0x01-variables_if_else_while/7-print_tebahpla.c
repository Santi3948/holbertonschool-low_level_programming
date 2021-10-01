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
char c;
char sal = '\n';
for (c = 'z' ; c <= 'a' ; c--)
{
putchar (c);
}
putchar(sal);
return (0);
}
