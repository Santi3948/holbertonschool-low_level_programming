#include "lists.h"
#include <stdlib.h>
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = malloc(sizeof(dlistint_t));
	if(!aux)
		return (NULL);
	aux->next = NULL;
    aux->prev = NULL;
	aux->n = n;    
    if(*head)
    {
        (*head)->prev = aux;
        aux->next = *head;
       (*head) = aux;
    } else
    {   
        (*head) = aux;
    }
return (*head);
}
