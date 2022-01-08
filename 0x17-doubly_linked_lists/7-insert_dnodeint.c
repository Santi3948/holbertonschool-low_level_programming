#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the list
 * @idx: is the index of the list where the new node should be added.
 * @n: the number in the nex node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	unsigned int i = 0;
	size_t size = dlistint_len(*h);
	dlistint_t *aux2 = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);
	aux2->n = n;
	if (!aux2)
		return (NULL);
	if (idx >= size)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == size - 1)
		add_dnodeint_end(h, n);
	else
	{
		while (aux)
		{
			if (i + 1 == idx)
			{
				aux2->next = aux->next;
				aux->next->prev = aux2;
				aux->next = aux2;
				aux2->prev = aux;
				return (*h);
			}
			aux = aux->next;
			i++;
		}
	}
	return (*h);
}
