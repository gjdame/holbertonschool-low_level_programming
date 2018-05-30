#include "sort.h"

/**
 * partition - this partitions the array and swaps
 * @array: input array
 * @low: input low index
 * @high: input high index
 * @size: input size of array
 * Return: return the partioned index
 */
int partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	int x = low - 1;
	int y = high + 1;
	int tmp;

	while (1)
	{
		do {
			x++;
		} while (array[x] < pivot);

		do {
			y--;
		} while (array[y] > pivot);

		if (x > y)
			return (y);
		if (x == y)
			return (y - 1);
		tmp = array[x];
		array[x] = array[y];
		array[y] = tmp;
		print_array(array, size);
	}
}
/**
 * quicksort - sory array using quick sort method
 * @array: input array
 * @low: minimum point
 * @high: maximum point
 * @size: input size of array
 */
void quicksort(int *array, int low, int high, size_t size)
{

	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort_hoare - sory array using quick sort method
 * @array: input array
 * @size: input size of array
 */
void quick_sort_hoare(int *array, size_t size)
{
	unsigned int low = 0;
	unsigned int high = size - 1;

	if (size == 0 || size == 1)
		return;

	quicksort(array, low, high, size);
}
