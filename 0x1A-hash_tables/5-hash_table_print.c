#include "hash_tables.h"
/**
 * hash_table_print - A function that prints a hash table
 * @ht: Hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	unsigned long int s = 0;
	int first;

	if (ht == NULL)
		return;
	first = 1;
	printf("{");
	for (; s < ht->size; s++)
	{
		cur = ht->array[s];
		while (cur != NULL)
		{
			if (!first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", cur->key, cur->value);
			first = 0;
			cur = cur->next;
		}
	}
	printf("}\n");
}
