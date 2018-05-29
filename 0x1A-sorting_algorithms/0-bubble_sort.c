#include "sort.h"

/**
 * bubble_sort - sort using bubble sort method
 * @array: input array of list
 * @size: input size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, holder = 0, s_holder = size, flag = 0;

	if (size == 0 || size == 1)
		return;
	while (i < s_holder)
	{
		flag = 0;
		if (array[i] > array[i + 1])
		{
			holder = array[i];
			array[i] = array[i + 1];
			array[i + 1] = holder;
			flag = 1;
			print_array(array, size);
		}
		if (i == s_holder - 2)
		{
			if (flag == 0)
				break;
			s_holder--;
			i = -1;
		}
		i++;
	}
}
