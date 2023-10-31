#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to right child of another
 * @parent: parent node
 * @value: value of node
 * Return: newly create node or NULL if failed
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
