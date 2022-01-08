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
 * delete_dnodeint_at_index - deletes the node at index
 * @head: the list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;
	size_t size = dlistint_len(*head);

	if (!head || !*head || index >= largo)
		return (-1);
	while (aux)
	{
		if (i == index)
		{
			if (aux->prev)
				aux->prev->next = aux->next;
			if (aux->next)
				aux->next->prev = aux->prev;
			free(aux)
			return (1);
		}
		aux = aux->next;
		i++;
		}
	return (1);
}
