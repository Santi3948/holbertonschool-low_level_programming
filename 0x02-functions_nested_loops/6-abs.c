#include "main.h"

/**
* _abs - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
*/
int _abs(int c)
{
if (c < 0)
{
	return (c * (-1));
}
return (c);
}
