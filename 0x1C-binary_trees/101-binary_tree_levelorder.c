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
void levelorder(const binary_tree_t *tree, void (*func)(int), size_t level_l, size_t level_r)
{
        if (tree == NULL || func == NULL)
                return;

        if (tree!= NULL)
        {
                func(tree->n);
                if (level_l == level_r)
                        levelorder(tree->left, func, level_l - 1, level_r);
                else
                        levelorder(tree->right, func, level_r - 1, level_r);
        }
}
/**
* binary_tree_inorder - inorder traversal
* @tree: root node
* @func: function pointer
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level;

	level = binary_tree_height(tree);

	levelorder(const binary_tree_t *tree, void (*func)(int), level, level);
}
