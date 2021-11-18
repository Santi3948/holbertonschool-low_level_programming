#include "main.h"
/**
  * clear_bit - sets
  * @n: Pointer
  * @index: Index
  * Return: 1 if it works, otherwise -1.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > sizeof(8) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
