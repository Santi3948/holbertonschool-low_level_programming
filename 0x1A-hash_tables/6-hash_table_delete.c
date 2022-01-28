#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_list;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			aux_list = ht->array[i];
			free(aux_list->key);
			free(aux_list->value);
			ht->array[i] = ht->array[i]->next;
			free(aux_list);
		}
		free(ht->array[i]);
	}
	free(ht->array)
	free(ht);
}
