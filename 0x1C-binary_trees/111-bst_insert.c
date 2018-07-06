#include "binary_trees.h"
/**
 * bst_insert - insert a node into a binary search tree
 * @tree: double pointer to root
 * @value: value of node to insert
 * Return: address of new node or NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	tmp = *tree;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	while (tmp)
	{
		if (tmp->n == value)
			return (NULL);

		if (value < tmp->n)
		{
			if (tmp->left == NULL)
			{
				tmp->left = (bst_t *)binary_tree_node(tmp, value);
				return (tmp->left);
			}
			tmp = tmp->left;
		}
		if (value > tmp->n)
		{
			if (tmp->right == NULL)
			{
				tmp->right = (bst_t *)binary_tree_node(tmp, value);
				return (tmp->right);
			}
			tmp = tmp->right;
		}
	}
	return (NULL);

}
