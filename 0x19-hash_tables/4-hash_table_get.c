#include "hash_tables.h"
/**
 *
 *
 *
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *check;

	index = key_index((const unsigned char*) key, ht->size);
	check = ht->array[index];
	if (check == NULL)
		return(NULL);

	while(check != NULL)
	{
		if (strcmp(key, check->key) == 0)
		{
			return(check->value);
		}
		check = check->next;
	}
	return(NULL);
}
