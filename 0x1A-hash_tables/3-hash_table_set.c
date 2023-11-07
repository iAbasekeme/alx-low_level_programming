#include "hash_tables.h"
/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: A key in the hash table
 * @value: value of the key in the bucket
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *kv;
	hash_node_t *current;
	char *dup_value;
	unsigned long int hash = key_index((const unsigned char *)key, ht->size);

	kv = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!kv)
		return (0);

	kv->key = strdup(key);
	if (!kv->key)
	{
		free(kv);
		return (0);
	}

	kv->value = strdup(value);
	if (!kv->value)
	{
		free(kv->key);
		free(kv);
		return (0);
	}

	current = ht->array[hash];
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			dup_value = strdup(value); /*Store the value */
			if (dup_value == NULL)
				return (0);
			free(current->value);		/* Free the current value*/
			current->value = dup_value; /* then update it*/
			return (1);
		}
		current = current->next;
	}

	if (ht->array[hash] == NULL)
	{
		ht->array[hash] = kv;
		kv->next = NULL;
	}
	else
	{
		kv->next = ht->array[hash];
		ht->array[hash] = kv;
	}

	return (1);
}
