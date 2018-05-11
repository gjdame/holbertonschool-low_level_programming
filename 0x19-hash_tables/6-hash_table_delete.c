#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *runner;
	hash_table_t *tmp = ht;

	i = 0;
	while (i < ht->size)
	{
		runner = tmp->array[i];
		while (runner != NULL)
		{
			free(runner->key);
			free(runner->value);
			free(runner);
			runner = runner->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);

}
