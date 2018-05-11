#include "hash_tables.h"
/**
 *
 *
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *tmp;
	unsigned int index;


	index = key_index((const unsigned char*) key, ht->size);
	tmp = ht->array[index];

	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t*));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[index] = new;
		return(1);
	}

	while(tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return(1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t*));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return(1);
}
