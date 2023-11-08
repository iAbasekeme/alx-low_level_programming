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
	unsigned long int hash;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	hash = key_index((const unsigned char *)key, ht->size);
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
