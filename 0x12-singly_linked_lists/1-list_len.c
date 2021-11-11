#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
        size_t i = 0;
        while (h != NULL)
        {
                i++;
                h = h->next;

        }
        return (i);
}