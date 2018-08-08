#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: position or -1 if not found
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
