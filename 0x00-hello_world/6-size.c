#include <stdio.h>
/**
* main - size
* Return: size
*/
int main(void)
{int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;
	double doubleTyp;
	char charType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
