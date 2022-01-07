#include "lists.h"
#include <stdlib.h>
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *tail = *head;
    dlistint_t *aux = malloc(sizeof(dlistint_t));
    if(!aux)
        return (NULL);
    aux->next = NULL;
    aux->prev = NULL;
    aux->n = n;
    if(*head)
    {	
        while(tail->next)
            tail = tail->next;
        tail->next = aux;
        aux->prev = tail;
       tail = aux;
    } else
    {
        (*head) = aux;
    }
	return (*head);
}
