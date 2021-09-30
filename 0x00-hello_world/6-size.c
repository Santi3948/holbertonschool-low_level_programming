#include <stdio.h>
/**
* main - size
* Return: size
*/
int main(void)
{int intType;
long int intType;
long long int longlongintType;
float floatType;
double doubleTyp;
char charType;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu byte\n", sizeof(floatType));
return (0); }
