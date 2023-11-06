#include "hash_tables.h"
/**
 * hash_table_create: This function creates a hash table
 * @size: This is the size of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

    hash_table_t *ht;
    unsigned long int i = 0;

    if (!size)
        return (NULL);

    ht = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (!ht)
        return (NULL);
    ht->size = size;

    ht->array = malloc(size * sizeof(hash_table_t *));
    for (; i < size; i++)
    {
        ht->array[i] = NULL;
    }
    return (ht);
}