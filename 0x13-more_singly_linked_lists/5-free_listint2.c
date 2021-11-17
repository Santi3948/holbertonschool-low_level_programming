#include "lists.h"
/**
 * free_listint2 -  free all the elements of the list
 * @head: the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
	while (*head)
	{
	aux = *head;
	*head = (*head)->next;
	free(aux);
	}
	free(*head);
	*head = NULL;
	}
}
