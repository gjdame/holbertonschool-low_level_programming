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
		return (0);

	if (node->parent == NULL)
		return (0);

	depth = binary_tree_depth(node->parent);
	depth++;
	return (depth);
}
/**
 *
 *
 *
 *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_depth;
	size_t second_depth;

	if (first->parent == NULL || second->parent == NULL)
		return (NULL);

	if (first->parent == second)
		return (first->parent);

	if (second->parent == first)
		return (second->parent);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (first_depth > second_depth)
	{
		while (first_depth > second_depth)
		{
			first = first->parent;
			first_depth--;
		}
	}
	if (second_depth > first_depth)
	{
		while (second_depth > first_depth)
		{
			second = second->parent;
			second_depth--;
		}
	}
	while (first->parent != NULL && second->parent != NULL)
	{
		if (first->parent == second->parent)
			return (first->parent);
	}

	return (NULL);
}
