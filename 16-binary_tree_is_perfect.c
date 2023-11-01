#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 * @tree: tree root
 * Return: 0 or 1
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int node = 0;

	if (!tree)
		return (0);

	if (tree->left)
		node = 1 & binary_tree_is_perfect(tree->left);
	else
		node = 0;

	if (tree->right)
		node = 1 & binary_tree_is_perfect(tree->right);
	else
		node = 0;

	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		node = node ^ 1;

	return (node);
}
