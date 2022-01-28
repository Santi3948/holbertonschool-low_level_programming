#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *key_aux = (const unsigned char *)key;

	if (key && ht->array[key_index(key_aux, ht->size)])
		return (ht->array[key_index(key_aux, ht->size)]->value);
	return (NULL);
}
