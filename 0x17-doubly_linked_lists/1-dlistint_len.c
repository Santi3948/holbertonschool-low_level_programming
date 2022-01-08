#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: the list
 * Return: number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
