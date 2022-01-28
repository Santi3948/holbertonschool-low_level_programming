#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    hash_node_t *aux;

    new_node = malloc(sizeof(hash_node_t))
    {
        return (0);
    }
    aux = malloc(sizeof(hash_node_t))
    {
        free(new_node);
        return (0);
    }
    new_node->key = key;
    new_node->value = strdup(value);
    ht->array[key_index(key, ht->size)]
}
