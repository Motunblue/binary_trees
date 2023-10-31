#include "binary_trees.h"

/**
 *  binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree root
 * Return: result
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0;

	if (tree)
	{
		if (!tree->left)
			bal += -1;
		if (!tree->right)
			bal += 1;
		bal += binary_tree_balance(tree->left) - binary_tree_balance(tree->right);
	}
	return (bal);
}