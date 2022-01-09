#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
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
	dlistint_t *aux2 = malloc(sizeof(dlistint_t));

	if (!h || !aux2)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	aux2->n = n;
	while (aux && i < idx)
	{
		if (i + 1 == idx)
		{
			aux2->next = aux->next;
			if (aux->next)
				aux->next->prev = aux2;
			aux->next = aux2;
			aux2->prev = aux;
			return (aux2);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
