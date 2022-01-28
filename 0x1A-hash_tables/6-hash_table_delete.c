#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_list = NULL, *del = NULL;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux_list = ht->array[i];
		while (aux_list)
		{
			free(aux_list->key);
			free(aux_list->value);
			del = aux_list;
			aux_list = aux_list->next;
			free(del);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
