#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name
 * @f: f
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	f(name);
}
