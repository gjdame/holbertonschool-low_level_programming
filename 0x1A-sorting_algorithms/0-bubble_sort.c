#include "sort.h"


void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int holder = 0;
	int flag;
	unsigned int new_size = size;

	if(size == 0 || size == 1)
		return;

	while (i < new_size)
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
		if (i == (new_size - 2))
		{
			if (flag == 0)
				break;
			new_size--;
			i = -1;
		}
		i++;
	}
}
