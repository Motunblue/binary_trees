#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node to measure its depth
 * Return: depth of node or 0 is tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
