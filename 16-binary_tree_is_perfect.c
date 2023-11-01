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
	size_t ht_left = 0;
	size_t ht_right  = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		ht_left = 1 + binary_tree_height(tree->left);
	else
		ht_left = 1;

	if (tree->right)
		ht_right = 1 + binary_tree_height(tree->right);
	else
		ht_right = 1;

	return ((ht_left > ht_right) ? ht_left : ht_right);
}
/**
 *  binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree root
 * Return: result
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_is_full - Checks if a tree is full
 * @tree: tree root
 * Return: 0 or 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}


/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 * @tree: tree root
 * Return: 0 or 1
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((!binary_tree_balance(tree)) && binary_tree_is_full(tree));
}

