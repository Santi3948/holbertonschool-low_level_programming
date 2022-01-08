#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;
	size_t size = dlistint_len(*head);
	if(index >= size)
    {
		return (-1);
    }
	if(index == 0)
	{
		*head = (*head)->next;
		free(aux);
	}
	else if(index == size - 1)
	{
		while(aux->next)
		{
			aux = aux->next;
		}
		free(aux);
	}
	else
    {
		while(aux)
		{
			if(i == index)
			{
				aux->prev->next = aux->next;
				aux->next->prev = aux->prev;
				return(1);
			}	
			aux = aux->next;
            i++;
		}
    }
    return(1);
}
