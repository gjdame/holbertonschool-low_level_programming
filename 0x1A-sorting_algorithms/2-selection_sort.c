#include "sort.h"

/**
 * selection_sort - use selection sort to sort list
 * @array: input array
 * @size: input size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t j, min, i = 0;
	int holder = 0;

	if (size == 0 || size == 1)
		return;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		if (i != min)
		{
			holder = array[i];
			array[i] = array[min];
			array[min] = holder;
			print_array(array, size);
		}
		i++;
	}
}
