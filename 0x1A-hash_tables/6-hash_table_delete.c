#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size = 0;
	hash_node_t *tmp = NULL, *aux = NULL;

	if (!ht)
		return;
	size = ht->size;
	while (i < size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->value);
			free(tmp->key);
			aux = tmp;
			tmp = tmp->next;
			free(aux);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
