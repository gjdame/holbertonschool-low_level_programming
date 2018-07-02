#include "binary_trees.h"
/**
* binary_tree_depth - depth of node in a tree
* @node: node to check
* Return: size_t depth
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL)
		return(0);

	if (node->parent == NULL)
		return(0);
	depth = binary_tree_depth(node->parent);
	depth++;
	return (depth);
}
