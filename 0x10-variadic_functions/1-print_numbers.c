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
for (i = 0; i < n - 1 ; i++)
if (separator != NULL)
{
printf("%d%s", va_arg(ap, int), separator);
{
else
{
	printf("%d", va_arg(ap, int));
}
printf("%d\n", va_arg(ap, int));
va_end(ap);
}
