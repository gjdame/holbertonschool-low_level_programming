#include "binary_trees.h"
/**
 * array_to_bst - array to binary search tree
 * @array: pointer to first elemetn of array
 * @size: size of array
 * Return: root node of search tree
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root_node = NULL;
	size_t i;

	i = 0;
	while (i < size)
	{
		bst_insert(&root_node, array[i]);
		i++;
	}
	return (root_node);
}
