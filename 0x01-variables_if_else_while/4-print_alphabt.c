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
for (c = 'a' ; c <= 'z' ; c++)
{
if (c != 'q' && c != 'e')
{
putchar (c);
}
}
putchar(sal);
return (0);
}
