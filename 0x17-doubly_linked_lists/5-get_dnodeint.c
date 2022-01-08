#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the list
 * @index: is the index of the node, starting from 0
 * Return: returns the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; head; i++)
	{
		if (index == i)
			return (head);
		head = head->next;
	}
	return (NULL);
}
