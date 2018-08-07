#include "search_algos.h"
/**
 *
 *
 *
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high  = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
		return(-1);

	while(high != low)
	{
		if (pos > size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return(-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
		if (array[pos] == value)
			return(pos);
		if (array[pos] > value)
		{
			high--;
			pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		}
		if (array[pos] < value)
		{
			low++;
			pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		}
	}
	if (array[low] == value)
		return(low);

	return(-1);
}
