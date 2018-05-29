#include "sort.h"

/**
 * print_parts - prints part of the list
 * @array: input array
 * @min: start of array
 * @max: end of array
 */
void print_parts(int *array, size_t min, size_t max)
{
	size_t i;

	i = min;
	while (i < max)
	{
		if (i > min)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}

/**
 * top_down - merge using top down method
 * @A: input left array
 * @B: input right array
 * @min: start of array
 * @mid: mid of the array
 * @max: end of array
 */
void top_down(int *A, int *B, size_t min, size_t mid, size_t max)
{
	size_t i = min, j = mid, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_parts(A, min, mid);
	printf("[right]: ");
	print_parts(A, mid, max);
	for (k = min; k < max; k++)
	{
		if (i < mid && (j >= max || A[i] <= A[j]))
		{
			B[k] = A[i];
			i++;
		}
		else
		{
			B[k] = A[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_parts(B, min, max);
	for (k = min; k < max; k++)
		A[k] = B[k];
}

/**
 * top_down_split - split into 2
 * @A: input left array
 * @B: input right array
 * @min: start of array
 * @max: end of array
 */
void top_down_split(int *A, int *B, size_t min, size_t max)
{
	size_t mid;

	if (max - min < 2)
		return;
	mid = (min + max) / 2;
	top_down_split(A, B, min, mid);
	top_down_split(A, B, mid, max);
	top_down(A, B, min, mid, max);
}

/**
 * merge_sort - sort array using merge method
 * @array: input array
 * @size: input size of array
 */
void merge_sort(int *array, size_t size)
{
	int *newlist;

	if (size == 0 || size == 1)
		return;
	newlist = malloc(sizeof(int) * size);
	if (newlist == NULL)
		return;
	top_down_split(array, newlist, 0, size);
	free(newlist);
}
