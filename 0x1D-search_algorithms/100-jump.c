#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search algorithm
 * @array: sorted array of ints
 * @size: size of array
 * @value: value to search for
 * Return: position or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int block;
	int i;
	int holder = 0;

	if (array == NULL)
		return (-1);

	block = sqrt((int)size);
	i = block;
	printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
	while (array[block] <= value)
	{
		if (array[holder] == value)
			return (holder);
		if (array[block] == value)
			break;
		holder = block;
		if (holder < (int)size)
			printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
		block = block + i;
	}
	if (holder > (int)size)
	{
		holder -= i;
		block -= i;
	}
	printf("Value found between indexes [%d] and [%d]\n", holder, block);
	while (holder <= block)
	{

		if (holder > (int)size - 1)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
		if (array[holder] == value)
			return (holder);
		holder++;
	}
	return (-1);
}
