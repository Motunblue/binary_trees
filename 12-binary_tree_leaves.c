#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: tree root
 * Return: result
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves;

	if (!tree)
		return (0);

	if (!tree->left)
		return (1);
	else
		leaves = 1 + binary_tree_leaves(tree->left);
	if (!tree->right)
		return (1);
	else
		leaves = 1 + binary_tree_leaves(tree->right);
	return leaves;
}