#include "hash_tables.h"
/**
 * key_index - This function gives the index of a key
 * @key: Key of the table
 * @size: The size of the array of the hash table
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;
	unsigned long int i = 0;

	if (!key || size == 0)
		return (0);
	idx = hash_djb2(key);

	for (; i < size; i++)
	{
		if (idx == i)
		{
			return (i);
		}
	}
	return (size);
}
