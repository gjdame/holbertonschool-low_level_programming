#include "sort.h"
/**
 *
 *
 *
 */
void heapify(int *array, size_t size)
{
	unsigned int start = size - 1;
	while (start >= 0)
	{
		sift_down(array, start, size - 1);
		start--;
	}
}
void sift_down(int *array, int start, int end)
{
	int root = start;
	
void heap_sort(int *array, size_t size)
{
	unsigned int end  = size - 1;

	while (end > 0)
	{
		tmp = array[end];
		array[end] = array[0];
		array[0] = tmp;
		end--;
		sift_down(array, 0, end);
	}
}
