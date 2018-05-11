#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of table to be created
 * Return: pointer to hash table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		hashtable->array[i] = NULL;
		i++;
	}

	return (hashtable);
}
