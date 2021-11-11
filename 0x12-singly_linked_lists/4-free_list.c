#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void free_list(list_t *head)
{
        list_t *aux;
	
       	while (head)
	{
	aux = head;
	head = head->next;
	free(aux);
	}
	free(head);
}
