#include "binary_trees.h"

/**
 * binary tree node - creates a binary tree node
 * @parent: parent node
 * @value: value for node
 * Return: newly create node or NULL if failed
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
