#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	unsigned int i = 0;
	size_t size = dlistint_len(*h);
	dlistint_t *aux2 = malloc(sizeof(dlistint_t));
    
    aux2->n = n;
	if(!aux2)
    {
		return(NULL);
    }
	if(idx >= size)
    {
		return (NULL);
    }
	if(idx == 0)
		add_dnodeint(h, n);
	else if(idx == size - 1)
		add_dnodeint_end(h, n);
	else
    {
		while(aux)
		{
			if(i + 1 == idx)
			{
				aux2->next = aux->next;
				aux->next->prev = aux2;
				aux->next = aux2;
				aux2->prev = aux;
				return(*h);
			}	
			aux = aux->next;
            i++;
		}
    }
    return(*h);
}
