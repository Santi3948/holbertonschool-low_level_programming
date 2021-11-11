#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - add the new node at the final of the list
 * @head: the list
 * @str: string
 * Return: returns list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *aux;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
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
