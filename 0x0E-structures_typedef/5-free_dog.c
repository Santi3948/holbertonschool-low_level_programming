#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - creates a new instance of the dog structure
 *
 * @d: dog name
 * Return: a new instance dog}
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
