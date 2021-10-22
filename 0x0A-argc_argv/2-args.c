#include <stdio.h>
/**
 * main - function that cop
 * @argv: memory area
 * @argc: copies n bytes
 * Return: pointer to dest
 */
int main(int argc, char *argv[])
{
int i;
(void)argc;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
