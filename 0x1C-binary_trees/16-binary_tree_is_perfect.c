#include "binary_trees.h"
/**
*
*
*
*
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;


	if (tree == NULL)
		return(0);

	if (!(tree->left) && !(tree->right))
		return(0);
	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return(1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left;
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right && tree->left)
	{
		if (binary_tree_height(tree->right) != binary_tree_height(tree->left))
		    return(0);
		if (binary_tree_is_leaf(tree->right) == 1 && binary_tree_is_leaf(tree->left) == 1)
			return(1);

	}


	right = binary_tree_is_perfect(tree->right);
	left = binary_tree_is_perfect(tree->left);

	if (right == 0 || left == 0)
		return(0);

	return(1);
}
