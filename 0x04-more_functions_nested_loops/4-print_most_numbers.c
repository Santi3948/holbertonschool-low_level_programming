#include "main.h"
/**
 * print_most_numbers - writes the character c to stdout
 * Return: On success 1.
 */
void print_most_numbers(void)
{
int pr;
for (pr = 48; pr <= 57; pr++)
{
	if (pr != 50 && pr != 52)
	{
		_putchar(pr);
	}
}
_putchar(10);
}
