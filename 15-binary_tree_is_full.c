#include "binary_trees.h"

/**
 * binary_tree_is_full - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: count on success, 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count, left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_is_full(tree->left);
	right_count = binary_tree_is_full(tree->right);

	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		count = left_count && right_count;
	return count;
}
