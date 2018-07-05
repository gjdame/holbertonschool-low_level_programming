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
 * binary_trees_ancestor - lowest common ancestor binary tree
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *first_node = (binary_tree_t *)first;
	binary_tree_t *second_node = (binary_tree_t *)second;
	size_t first_depth;
	size_t second_depth;

	if (first_node == NULL || second_node == NULL)
		return (NULL);

	first_depth = binary_tree_depth(first_node);
	second_depth = binary_tree_depth(second_node);

	if (first_depth > second_depth)
	{
		while (first_depth > second_depth)
		{
			first_node = first_node->parent;
			first_depth--;
		}
	}
	if (second_depth > first_depth)
	{
		while (second_depth > first_depth)
		{
			second_node = second_node->parent;
			second_depth--;
		}
	}
	while (first_node != second_node)
	{
		first_node = first_node->parent;
		second_node = second_node->parent;
	}

	return (first_node);
}
