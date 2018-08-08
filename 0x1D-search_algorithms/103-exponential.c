#include "search_algos.h"
/**
 * print_array - prints array
 * @array: sorted array of ints
 * @high: upper bound
 * @low: lower bound
 */
void print_array(int *array, size_t high, size_t low)
{
	if (low > high)
		return;
	printf("Searching in array: ");
	if (low == high)
	{
		printf("%u\n", array[high]);
		return;
	}

	while (low <= high)
	{
		printf("%u", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
/**
 * b_search - binary search helper function
 * Recursively searches for value based on midpoint
 * @array: sorted array of ints
 * @high: top end of array
 * @low: lower bound of array
 * @value: value to search for
 * Return: postion or -1 if not found
 */
int b_search(int *array, size_t high, size_t low, int value)
{
	int mid = low + (high - low) / 2;

	print_array(array, high, low);

	if (array[mid] == value)
		return (mid);
	if (high >= low)
	{
		if (array[mid] > value)
			return (b_search(array, mid - 1, low, value));
		else
			return (b_search(array, high, mid + 1, value));
	}
	return (-1);
}
/**
 * exponential_search - exponential search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: pos or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int block;
	int pow = 0;
	int holder = 0;

	if (array == NULL)
		return (-1);

	block = 1;

	while (block < (int)size)
	{
		if (array[holder] == value)
			return (holder);
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
	return (b_search(array, block, holder, value));
}
