#include "search_algos.h"
/**
 * print_array - prints array
 * @array: sorted array of ints
 * @high: upper bound
 * @low: lower bound
 */
void print_array(int *array, size_t high, size_t low)
{
	if (low >= high)
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
	{
		print_array(array, mid, low);
		if (array[mid] == array[mid - 1])
		{
			print_array(array, mid, mid - 1);
			mid--;
		}

		return (mid);
	}
	if (high >= low)
	{
		if (array[mid] > value)
			return (b_search(array, mid, low, value));
		else
			return (b_search(array, high, mid + 1, value));
	}
	return (-1);
}
/**
 * advanced_binary - binary search algorithm
 * @array: array of sorted ints
 * @size: size of array
 * @value: value to serach for
 * Return: position or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ret;

	if (array == NULL)
		return (-1);

	ret = b_search(array, (int)size - 1, 0, value);
	return (ret);
}
