#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (!d)
	return (NULL);
d->name = _strdup(name);
if (!d->name)
{
free(d);
return (NULL);
}
d->owner = _strdup(owner);
if (!d->owner)
{
	free(d->name);
	free(d);
	return (NULL);
}
d->age = age;
return (d);
}
