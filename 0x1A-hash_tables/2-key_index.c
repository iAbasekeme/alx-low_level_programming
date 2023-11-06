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
	unsigned long int hash;

	if (!key || size == 0)
		return (0);
	hash = hash_djb2(key);

	return (hash % size); /**Calculate the index by taking the modulo of the
						   * hash with the size of the hash table.*/
}
