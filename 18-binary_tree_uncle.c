#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node:  a pointer to the node to find the uncle
 * Return: ptr to uncle node or NULL if no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	tmp = node->parent->parent;
	return ((tmp->left == node->parent) ? tmp->right : tmp->left);
}
