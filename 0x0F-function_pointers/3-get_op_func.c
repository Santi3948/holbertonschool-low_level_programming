#ifndef GET_OP_H
#define GET_OP_H
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - print name
 * @s: array
 * Return: asd
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

i = 0;
while (i <= 4 && ops[i].op[0] != s[0])
{
	i++;
}
if (i > 4 || s[1])
{
	printf("Error\n");
	exit(99);
}
return (ops[i].f);
}
#endif
