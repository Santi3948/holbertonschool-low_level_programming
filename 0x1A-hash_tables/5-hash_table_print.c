#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, check;
	hash_node_t *aux_list;

	if (!ht)
		return;
	check = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux_list = ht->array[i];
		while (aux_list)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", aux_list->key, aux_list->value);
			check = 1;
			aux_list = aux_list->next;
		}
	}
	printf("}\n");
}
