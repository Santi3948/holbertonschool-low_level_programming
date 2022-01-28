#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht:  is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const char *valued;
	const unsigned char *key_aux;

	if (!ht || !key || !value)
	{
		return (0);
	}
	key_aux = (const unsigned char *)strdup(key);
	valued = strdup(value);
	if (!add_node(&(ht->array[key_index(key_aux, ht->size)]), key, valued))
		return (0);
	return (1);
}
/**
 * add_node - add node to the list head
 * @key: the key
 * @head: list
 * @value: the value
 * Return: returns list with the new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->key = (char *)key;
	new->value = (char *)strdup(value);
	new->next = *head;
	*head = new;
	new = NULL;
	free(new);
	return (*head);
}
