#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *tmp = (hash_table_t *) ht;
	unsigned int i;
	int flag = 0;
	hash_node_t *runner;

	if (ht == NULL)
		return;

	i = 0;
	printf("{");
	while (i < ht->size)
	{
		runner = tmp->array[i];
		while (runner != NULL)
		{
			printf("\'%s\': \'%s\'", runner->key, runner->value);
			if (runner->next != NULL)
				printf(", ");
			runner = runner->next;
			flag++;
		}
		if (tmp->array[i + 1] != NULL && flag > 0)
			printf(", ");
		i++;
	}
	printf("}");
	printf("\n");
}
