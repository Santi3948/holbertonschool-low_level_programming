#include <stdio.h>
/**
 * main - writes the character c to stdout
 * Return: On success 1.
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
	if ((a % 15) == 0)
	{
	printf("FizzBuzz");
	}
	else if ((a % 5) == 0)
		{
		printf("Buzz");
		}
		else if ((a % 3) == 0)
		{
		printf("Fizz");
		}
		else
		{
		printf("%d", a);
		}
	if (a != 100)
	printf(" ");
}
printf("\n");
return (0);
}
