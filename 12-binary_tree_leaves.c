#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 * @tree: tree root
 * Return: result
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves ;

	if (!tree)
		return (0);

	if (tree->left)
		leaves = 1 + binary_tree_leaves(tree->left);
	else
		leaves = 0;
	if (tree->right)
		leaves = 1 + binary_tree_leaves(tree->right);
	else
		leaves= 0;
	return leaves;
}