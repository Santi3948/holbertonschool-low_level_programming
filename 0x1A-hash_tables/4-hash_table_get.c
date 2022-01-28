#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *aux_node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	aux_node = ht->array[idx];
	while (aux_node)
	{
		if (strcmp(aux_node->key, key) == 0)
			return (aux_node->value);
		aux_node = aux_node->next;
	}
	return (NULL);
}
