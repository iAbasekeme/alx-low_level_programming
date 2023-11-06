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
	unsigned long int hash = hash_djb2((const unsigned char *)key);
	unsigned long int idx = hash % ht->size;

	kv = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!kv)
		return (0);

	kv->key = strdup(key);
	kv->value = strdup(value);

	if (!kv->key)
	{
		free(kv->key);
		free(kv);
		return (0);
	}

	if (!kv->value)
	{
		free(kv->value);
		free(kv);
		return (0);
	}

	if (ht->array[idx] == NULL)
	{
		kv->next = NULL;
	}
	else
	{
		kv->next = ht->array[idx];
	}
	ht->array[idx] = kv;
	return (1);
}
