#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
    	if (new == NULL)
    	{
        	return (NULL);
    	} 
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	new = NULL;
	free(new);
	return (*head);
}
