#include "binary_trees.h"
/**
* binary_tree_balance - checks if tree is balanced
* @tree: root node of tree
* Return: balance of tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	int pos = 0;
	int neg = 0;

	if (tree->right)
		while(tree->right)
		{
			neg++;
			tree = tree->right;
		}
	if (root->left)
		while (root->left)
		{
			pos++;
			root = root->left;
		}

	return(pos - neg);
}
