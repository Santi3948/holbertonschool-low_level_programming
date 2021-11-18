#include "main.h"
/**
  * get_bit - prints the binary representation of a number
  * @n: the number
  * @index: ind
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
