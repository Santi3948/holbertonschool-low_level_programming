#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * array_iterator - print name
 * @array: array
 * @size: size
 * @action: action
 */
int (*get_op_func(char *s))(int a, int b)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

if (s[0] != '+' && s[0] != '-' && s[0] != '*' && s[0] != '/' && s[0] != '%')
{
printf("Error\n");
exit (99);
}
i = 0;
while (i < 4 && ops[i].op[0] != s[0])
{
	i++;
}
return (ops[i].f);
}
