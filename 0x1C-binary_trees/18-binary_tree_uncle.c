#include "binary_trees.h"
/**
*
*
*
*
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return(NULL);

	if (node->parent == NULL)
		return(NULL);

	if (node->parent->right == NULL || node->parent->left == NULL)
		return(NULL);

	if (node->parent->right != NULL && node->parent->right != node)
		return(node->parent->right);
	if (node->parent->left != NULL && node->parent->left != node)
		return(node->parent->left);
	return(NULL);
}
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL)
                return(NULL);

        if (node->parent == NULL || node->parent->parent == NULL)
                return(NULL);
        return (binary_tree_sibling(node->parent));
}
