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

	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;
	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
/**
 * levelorder - level order traversal using binary tree
 * @tree: binary tree
 * @func: function pointer to print
 * @level: level on tree
 */
void levelorder(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL || func == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else
	{
		levelorder(tree->left, func, level - 1);
		levelorder(tree->right, func, level - 1);
	}
}
/**
* binary_tree_levelorder - inorder traversal
* @tree: root node
* @func: function pointer
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i = 0;
	size_t level;

	if (tree == NULL || func == NULL)
		return;

	level = binary_tree_height(tree);

	while (i < level)
	{
		levelorder(tree, func, i);
		i++;
	}
}
