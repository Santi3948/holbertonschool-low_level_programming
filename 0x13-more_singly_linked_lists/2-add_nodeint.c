#include "lists.h"
/**
 * add_nodeint - add node to the list head
 * @n: int
 * @head: list
 * Return: returns list with the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	new = NULL;
	free(new);
	return (*head);
}
