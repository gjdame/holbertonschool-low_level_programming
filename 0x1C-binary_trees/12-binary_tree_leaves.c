#include "binary_trees.h"
/**
* binary_tree_leaves - count number of leaves of tree
* @tree: root node of tree
* Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right;
	size_t leaves;
	size_t left;

	if (tree == NULL)
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);

	right = binary_tree_leaves(tree->left);
	left = binary_tree_leaves(tree->right);
	leaves = right + left;
	return (leaves);
}
