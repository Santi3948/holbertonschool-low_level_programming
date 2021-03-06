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

va_start(ap, n);
for (i = 0; i < n ; i++)
{
if (i == n - 1 || separator == NULL)
{
printf("%d", va_arg(ap, int));
}
else
{
printf("%d%s", va_arg(ap, int), separator);
}
}
printf("\n");
va_end(ap);
}
