#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum all
 * @n: n
 * @separator: sep
 * Return: ret
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

if (separator == NULL)
separator = "";

va_start(ap, n);
for (i = 0; i < n - 1 ; i++)
printf("%d, ", va_arg(ap, int));
printf("%d\n", va_arg(ap, int));
va_end(ap);
}
