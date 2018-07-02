#include "binary_trees.h"
/**
*
*
*
*
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return(0);

	if (!(tree->left) && !(tree->right))
		return(1);
        left = binary_tree_size(tree->left);
	left++;
	right = binary_tree_size(tree->right);
	right++;

	return (right + left - 1);
}
