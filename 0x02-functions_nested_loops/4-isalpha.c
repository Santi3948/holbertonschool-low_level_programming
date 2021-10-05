#include "main.h"
/**
* _isalpha - writes the character c to stdout
* Return: 0 o 1
* @c: The character to print
*/
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
	return (0);
}
}
