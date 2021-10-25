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
int num1, num2;
(void)argc;
num1 = 0;
if (argv[1] == 0 || argv[2] != 0)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("%d\n", num1);
return (0);
}
num2 = atoi(argv[1]);
if ((num2 - 25) >= 0)
{
num1 = num1 + 1;
num2 = num2 - 25;
while (num2 >= 25)
{
num1 = num1 + 1;
num2 = num2 - 25;
}
}
if ((num2 - 10) >= 0)
{
num1 = num1 + 1;
num2 = num2 - 10;
while (num2 >= 10)
{
num1 = num1 + 1;
num2 = num2 - 10;
}
}
if ((num2 - 5) >= 0)
{
num1 = num1 + 1;
num2 = num2 - 5;
while (num2 >= 5)
{
num1 = num1 + 1;
num2 = num2 - 5;
}
}
if ((num2 - 2) >= 0)
{
num1 = num1 + 1;
num2 = num2 - 2;
while (num2 >= 2)
{
num1 = num1 + 1;
num2 = num2 - 2;
}
}
if ((num2 - 1) >= 0)
{
num1 = num1 + 1;
num2 = num2 - 1;
while (num2 >= 1)
{
num1 = num1 + 1;
num2 = num2 - 1;
}
}
printf("%d\n", num1);
return (0);
}
