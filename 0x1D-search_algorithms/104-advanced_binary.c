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
        if (array[mid] == value)
        {
		print_array(array, high, mid);
                return(mid);
        }

	if (array[mid] > value)
		return(b_search(array, mid - 1, low, value));
	else
		return(b_search(array, high, mid, value));
}

int advanced_binary(int *array, size_t size, int value)
{
	int ret;
	if (array == NULL)
		return(-1);

	ret = b_search(array, (int)size, 0, value);
	return(ret);
}
