#include "binary_trees.h"
/**
 * bst_search - search for a node w/ value into a binary search tree
 * @tree: double pointer to root
 * @value: value of node to search for
 * Return: address of node or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	while (tree)
	{
		if (tree->n == value)
			return ((bst_t *)tree);

		if (value < tree->n)
			tree = tree->left;

		if (value > tree->n)
			tree = tree->right;
	}
	return (NULL);
}
