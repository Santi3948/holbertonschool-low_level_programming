#include "main.h"
/**
  * get_bit - prints the binary representation of a number
  * @n: the number
  * @index: ind
  * Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux, i;

	aux = n;
	i = 0;
	while (aux > 0)
	{
		i++;
		aux = aux >> 1;
	}
	if (index > i)
		return (-1);

	return ((n >> index) & 1);
}
