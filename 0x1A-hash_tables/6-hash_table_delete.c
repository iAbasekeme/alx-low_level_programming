#include "hash_tables.h"
/**
 * hash_table_delete - A function to delete a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
    free(ht->array);
    free(ht);
}
