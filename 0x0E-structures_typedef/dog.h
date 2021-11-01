#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - sc
 * dog - qwedc
 * @name: awdc
 * @age: asd
 * @owner: adad
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
