#include "search_algos.h"
/**
 * print_array - prints array
 * @array: sorted array of ints
 * @high: upper bound
 * @low: lower bound
 */
void print_array(int *array, int high, int low)
{
	printf("Searching in array: ");
	if (low == high)
	{
		printf("%d\n", array[high]);
		return;
	}

	while (low != high)
	{
		printf("%d", array[low]);
		if (low + 1 != high)
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
int b_search(int *array, int high, int low, int value)
{
	int mid;

	if (high == low + 1)
	{
		print_array(array, high, low);
		if (array[low] == value)
			return (low);
		return (-1);
	}
	print_array(array, high, low);

	mid = (high + low) / 2;
	if (array[mid] == value)
	{
		print_array(array, high, mid);
		return (mid);
	}

	if (array[mid] > value)
		return (b_search(array, mid - 1, low, value));
	else
		return (b_search(array, high, mid, value));
}
/**
 * binary_search - binary search algorithm
 * @array: array of sorted ints
 * @size: size of array
 * @value: value to serach for
 * Return: position or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int ret;

	if (array == NULL)
		return (-1);

	ret = b_search(array, (int)size, 0, value);
	return (ret);
}
