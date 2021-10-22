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
	(void)argc;
	if (argv[1] && argv[2])
	{
	printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
	return (0);
	}
	printf("Error\n");
	return (1);
}
