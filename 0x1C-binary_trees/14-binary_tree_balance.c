#include "binary_trees.h"
/**
 * binary_tree_height - height binary tree
 * @tree: root node of tree
 * Return: height of tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;


	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);
	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
* binary_tree_balance - checks if tree is balanced
* @tree: root node of tree
* Return: balance of tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int pos = 0;
	int neg = 0;

	if (tree == NULL)
		return (0);

	neg = binary_tree_height(tree->right);
	neg = neg * -1;

	pos = binary_tree_height(tree->left);

	return (pos - neg);
}
