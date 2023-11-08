#include "hash_tables.h"
/**
 * hash_table_delete - A function to delete a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *temp;

	for (; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
