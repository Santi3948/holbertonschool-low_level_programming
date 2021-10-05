#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - putchar
* Return: putchar
*/
int main(void)
{
char a[] = "_putchar";
int i;
for (i = 0; a[i] != 0; i++)
{
	_putchar(i);
}
_putchar(10);
return (0);
}
