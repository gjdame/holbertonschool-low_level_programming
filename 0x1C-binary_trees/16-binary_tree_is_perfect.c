#include "binary_trees.h"
/**
* binary_tree_height - height of tree
* @tree: root node of binary tree
* Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;


	if (tree == NULL)
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
/**
 * binary_tree_is_perfect - checks for perfect tree
 * @tree: root node of tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t num_leaves = 0;
	size_t height = 0;
	size_t count;
	size_t pow = 1;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	num_leaves = binary_tree_leaves(tree);

	count = 1;
	while (count < height)
	{
		pow = 2 * pow;
		count++;
	}

	if (num_leaves == pow)
		return (1);
	else
		return (0);
}
