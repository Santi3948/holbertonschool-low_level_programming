#include "lists.h"
/**
 * free_listint -  free all the elements of the list
 * @head: the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
	aux = head;
	head = head->next;
	free(aux);
	}
	free(head);
}
