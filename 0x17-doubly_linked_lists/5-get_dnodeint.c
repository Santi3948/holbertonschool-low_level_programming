#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if(!head)
		return (NULL);
	for(i = 0; head; i++)
	{
		if (index == i)
			return (head);
		head = head->next;
	}
    return (NULL);
}
