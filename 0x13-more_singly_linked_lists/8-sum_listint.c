#include "lists.h"
/**
 * sum_listint - dou
 * @head: list
 * Return: int sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head)
	{
		while (head)
		{
			i += head->n;
			head = head->next;
		}
		return (i);
	}
	else
	{
		return (0);
	}
}
