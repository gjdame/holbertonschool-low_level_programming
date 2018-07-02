#include "binary_trees.h"
/**
* binary_tree_nodes - how many nodes on a tree
* @tree: root node of tree
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t nodes_right, nodes_left;

	if (tree == NULL)
		return(0);

	if (tree->right || tree->left)
	{
		nodes_left = binary_tree_nodes(tree->left) + 1;
		nodes_right = binary_tree_nodes(tree->right) + 1;
		return(nodes_right + nodes_left - 1);
	}
	return(0);
}
