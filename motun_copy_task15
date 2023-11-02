#include "binary_trees.h"

int tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - check if all child of a tree has 0 or 2 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: count on success, 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_is_full(tree));
}
/**
 * tree_is_full - Check if a tree is full recursively
 * @tree: root
 * Return: 1 is full and 0 if not
*/
int tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	return (tree_is_full(tree->left) && tree_is_full(tree->right));
}
