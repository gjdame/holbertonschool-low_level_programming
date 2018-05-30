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
	int max, i, j, tmp, total;
	int _size = size;

	i = 0;
	max = 0;
	while (i < _size - 1)
	{
		if (array[i] > max)
			max = array[i];
		i++;
	}
	max++;
	counting = malloc(max * sizeof(int));
	copy = malloc(size * sizeof(int));

	j = 0;
	while (j < max)
	{
		counting[j] = 0;
		j++;
	}

	j = 0;
	while (j < _size)
	{
		copy[j] = array[j];
		j++;
	}

	i = 0;
	while (i < _size)
	{
		tmp = array[i];
		counting[tmp]++;
		i++;
	}

	i = 0;
	total = 0;
	while (i < max)
	{
		tmp = counting[i];
		total += tmp;
		counting[i] = total;
		i++;
	}
	print_array(counting, max);
	i = 0;
	while (i < _size)
	{
		tmp = copy[i];
		array[counting[tmp] - 1] = tmp;
		counting[tmp]--;
		i++;
	}
}
