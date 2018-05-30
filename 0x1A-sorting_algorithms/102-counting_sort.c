#include "sort.h"
/**
 * counting_sort - sorting array of ints
 * @array: array of ints
 * @size: size of array
 *
 */
void counting_sort(int *array, size_t size)
{
	int *copy, *counting;
	unsigned int max, i, tmp;

	if (size == 0 || size == 1)
		return;

	i = 0;
	max = 0;
	while (i < size)
	{
		if (array[i] > (int)max)
			max = array[i];
		i++;
	}
	max++;
	counting = malloc(max * sizeof(int));
	if (counting == NULL)
		return;
	copy = malloc(size * sizeof(int));
	if (copy == NULL)
	{
		free(counting);
		return;
	}

	i = 0;
	while (i < size)
	{
		copy[i] = array[i];
		i++;
	}

	i = 0;
	while (i < max)
	{
		counting[i] = 0;
		i++;
	}

	i = 0;
	while (i < size)
	{
		counting[array[i]]++;
		i++;
	}

	i = 1;
	while (i < max)
	{
		counting[i] += counting[i - 1];
		i++;
	}

	print_array(counting, max);

	i = 0;
	while (i < size)
	{
		tmp = copy[i];
		array[counting[tmp] - 1] = tmp;
		counting[tmp]--;
		i++;
	}
	free(counting);
	free(copy);
}
