#include "search_algos.h"
#include <math.h>
/**
 * move - helper function to move down list
 * @list: linked list
 * Return: pointer to list
 */
skiplist_t *move(skiplist_t *list)
{

	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
/**
 * linear_skip - jump list algorithm for singly linked list
 * @list: sorted linked list
 * @value: value to search for
 * Return: index of value or null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{

	skiplist_t *runner = list;
	skiplist_t *prev;

	if (list == NULL)
		return (NULL);

	while (runner != NULL)
	{
		prev = runner;
		runner = runner->express;
		printf("Value checked at index [%lu] = [%d]\n",
		       runner->index, runner->n);
		if (runner->n >= value)
			break;
		if (runner->express == NULL)
		{
			prev = runner;
			runner = move(runner);
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, runner->index);
	while (prev->index <= runner->index)
	{
		if (prev->index == runner->index)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       prev->index, prev->n);
			if (prev->n == value)
				return (prev);
			else
				return (NULL);
		}

		if (prev->n == value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       prev->index, prev->n);

			return (prev);
		}
		printf("Value checked at index [%lu] = [%d]\n",
		       prev->index, prev->n);
		prev = prev->next;
	}
	return (NULL);
}
