#include "binary_trees.h"

/**
 * binary_tree_is_full_check - check if all child of a tree has 0 or 2 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: count
 */
int binary_tree_is_full_check(const binary_tree_t *tree)
{
	int left_count, right_count;

	if (tree == NULL)
		return (1);

	left_count = binary_tree_is_full_check(tree->left);
	right_count = binary_tree_is_full_check(tree->right);

	/*count = left_count ^ right_count;*/
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
	{
		return (left_count && right_count);
	}
	else
		return (0);
}

/**
 * binary_tree_is_full - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: count on success, 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_full_check(tree));
}
