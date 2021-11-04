#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all
 * @n: n
 * Return: ret
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, p = 0;
int x;

if (n == 0)
return (0);
va_start(ap, n);
for (i = 0; i < n ; i++)
p += va_arg(ap, int);
va_end(ap);
x = p;
return (x);
}
