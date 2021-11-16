#include "lists.h"
/**
 * pop_listint -  free all the elements of the list
 * @head: the first element of the list
 * Return: i
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int i;

	if (*head)
	{
	i = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	}
	else
	{
		return (0);
	}
	return (i);
}
