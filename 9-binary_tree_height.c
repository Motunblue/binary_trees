#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree on success
 * 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht_left;
	size_t ht_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
		ht_left = 1 + binary_tree_height(tree->left);
	else
		ht_left = 0;

	if (tree->right)
		ht_right = 1 + binary_tree_height(tree->right);
	else
		ht_right = 0;

	if (ht_left > ht_right)
		return (ht_left);
	else
		return (ht_right);

}
