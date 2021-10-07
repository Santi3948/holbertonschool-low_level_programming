#include "main.h"
#include <stdio.h>
/**
 * FizzBuzz - writes the character c to stdout
 * Return: On success 1.
 */
int FizzBuzz(void)
{
int a;
for (a = 1; a <= 100)
{
if ((a % 3) == 0)
{
printf("Fizz");
}
else if ((a % 5) == 0)
{
printf("Buzz");
}
else if ((a % 15) == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", a);
}
}
}
