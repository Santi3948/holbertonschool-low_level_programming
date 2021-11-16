#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - add the new node at the final of the list
 * @head: the list
 * @n: int
 * Return: returns list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		aux = *head;
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	}
	return (*head);
}
