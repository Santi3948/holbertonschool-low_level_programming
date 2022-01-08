#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the list
 * @n: the number in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = *head;
	dlistint_t *aux = malloc(sizeof(dlistint_t));

	if (!aux)
		return (NULL);
	aux->next = NULL;
	aux->prev = NULL;
	aux->n = n;
	if (*head)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = aux;
		aux->prev = tail;
		tail = aux;
	}
	else
		(*head) = aux;
	return (*head);
}
