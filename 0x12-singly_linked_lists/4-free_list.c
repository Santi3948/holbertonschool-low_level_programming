#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list -  free all the elements of the list
 * @head: the first element of the list
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
	aux = head;
	free(aux->str);
	head = head->next;
	free(aux);
	}
	free(head);
}
