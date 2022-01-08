#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the list
 * @n: the number in the new node
 * Return: the list with the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = malloc(sizeof(dlistint_t));

	if (!aux)
		return (NULL);
	aux->next = NULL;
	aux->prev = NULL;
	aux->n = n;
	if (*head)
	{
		(*head)->prev = aux;
		aux->next = *head;
		(*head) = aux;
	}
	else
		(*head) = aux;
	return (*head);
}
