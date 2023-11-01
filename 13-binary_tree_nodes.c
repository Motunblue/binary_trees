#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: count on success, 0 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0, left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	count = left_count + right_count;
	return ((tree->left || tree->right) ? 1 + count : count);
}
