#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  * _strdup - check the code
  * @str: str
  * Return: pointer to d.
  */
char *_strdup(char *str)
{
	int i, n = 0, g;
	char *d;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	n = n + 1;
	d = malloc(sizeof(char) * n + 1);
	if (d == NULL)
	{
		return (NULL);
	}
	for (g = 0; g <= n - 1; g++)
	d[g] = str[g];
	return (d);
}
/**
 * new_dog - init
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */
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
