#include "hash_tables.h"
/**
 * key_index - get index for key value
 * @key: string to be hashed
 * @size: size of table
 * Return: index for key in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = ((hash_djb2(key)) % size);
	return (index);
}
