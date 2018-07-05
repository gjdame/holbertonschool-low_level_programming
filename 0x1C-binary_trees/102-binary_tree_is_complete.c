#include "binary_trees.h"
/**
 * binary_tree_is_complete - is binary tree complete (all to left)
 * @tree: root node
 * Return: 1 if true 0 if false
 *
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right)
		if ((tree->right->left) && !(tree->right->right))
			return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
		return (1);

	right = binary_tree_is_complete(tree->right);
	left = binary_tree_is_complete(tree->left);

	if (right == 0 || left == 0)
		return (0);

	return (1);
}
