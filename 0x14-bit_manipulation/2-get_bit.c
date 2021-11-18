#include "main.h"
#include "main.h"
/**
  * print_binary - prints the binary representation of a number
  * @n: the number
  * Return: void
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
