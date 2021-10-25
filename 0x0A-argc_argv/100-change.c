#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that cop
 * @argv: memory area
 * @argc: copies n bytes
 * Return: pointer to dest
 */
int main(int argc, char *argv[])
{
int num1 = 0, num2;
(void)argc;
if (argv[1] == 0 || argv[2] != 0)
{
printf("Error\n");
return (1);
}
num2 = atoi(argv[1]);
while (num2 >= 1)
{
num1 = num1 + 1;
if (num2 >= 25)
num2 = num2 - 25;
else if (num2 >= 10)
num2 = num2 - 10;
else if (num2 >= 5)
num2 = num2 - 5;
else if (num2 >= 2)
num2 = num2 - 2;
else if (num2 >= 1)
num2 = num2 - 1;
}
printf("%d\n", num1);
return (0);
}
