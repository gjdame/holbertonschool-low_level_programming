#include "sort.h"
/**
 *
 *
 *
 */
void sift_down(int *array, int start, int end, size_t size)
{
        int root = start;
        int child;
        int tmp;
        while((root * 2) + 1 <= end)
        {
                child = root * 2 + 1;
                if (child + 1 <= end && array[child] < array[child + 1])
                {
                        child++;
                }
                if (array[root] < array[child])
                {
                        tmp = array[root];
                        array[root] = array[child];
                        array[child] = tmp;
			print_array(array, size);
		}
                else
                        return;
        }
}
void heapify(int *array, size_t size)
{
	int start = (size - 2) / 2;
	while (start >= 0)
	{
		sift_down(array, start, size - 1, size);
		start--;
	}
}
void heap_sort(int *array, size_t size)
{
	unsigned int end  = size - 1;
	unsigned int tmp;
	heapify(array, size);

	while (end > 0)
	{
		tmp = array[end];
		array[end] = array[0];
		array[0] = tmp;
		print_array(array, size);
		end--;
		sift_down(array, 0, end, size);
	}
}
