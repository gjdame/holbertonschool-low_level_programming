#include "search_algos.h"
/**
 *
 *
 *
 */
void print_array(int *array, int high, int low)
{
	printf("Searching in array: ");
	if (low == high)
	{
		printf("%d\n", array[high]);
		return;
	}

	while(low != high)
	{
		printf("%d", array[low]);
		if (low + 1 != high)
			printf(", ");
		low++;
	}
	printf("\n");
}

int b_search(int *array, int high, int low, int value)
{
        int mid;

	if (high == low + 1)
	{
		print_array(array, high, low);
		if (array[low] == value)
			return(low);
		return(-1);
	}
	print_array(array, high, low);

	mid = (high + low) / 2;
        if (array[mid] == value || array[mid - 1] == value)
        {
                return(mid);
        }

	if (array[mid] > value)
		return(b_search(array, mid, low, value));
	else
		return(b_search(array, high, mid, value));
}

int exponential_search(int *array, size_t size, int value)
{
	int block;
	int pow = 0;
	int holder = 0;

	if (array == NULL)
		return(-1);

	block = 1;

	while(block < (int)size)
	{
		if (array[holder] == value)
			return(holder);
		if (array[block] >= value)
			break;
		holder = block;
		if (holder < (int)size)
			printf("Value checked array[%d] = [%d]\n", holder, array[holder]);
		pow++;
		block = block * 2;
	}

	if (block > (int)size - 1)
		block = (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", holder, block);
	return(b_search(array, block + 1, holder, value));
}
