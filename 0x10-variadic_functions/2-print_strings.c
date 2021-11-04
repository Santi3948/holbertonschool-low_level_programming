#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - sum all
 * @n: n
 * @separator: sd
 * Return: ret
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *c = 0;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n - 1 ; i++)
	{
	c = va_arg(ap, char *);
	if (c != NULL)
	{
	printf("%s%s", c, separator);
	}
	else
	{
		printf("(nil)");
	}
	}
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
