#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - init
 * @d: d
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		printf("");
	} else if (d->name == NULL)
		{
			printf("Name: (nil)");	
		} else if (d->age == NULL || d->owner = NULL)
			{
				printf("(nil)");
			}
}
