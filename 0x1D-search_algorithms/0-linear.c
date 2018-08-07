#include "search_algos.h"
/**
 * linear_search: linear search algorithm
 * linear search algorithm
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return(-1);

	while(i < (int)size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return(i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return(-1);
}
