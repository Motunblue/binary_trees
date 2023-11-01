#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @tree: pointer to the node to find the sibling
 *
 * Return: sibling's node on success, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node && node->parent)
	{
		temp = node->parent;
		if ((temp->left) == node)
		{
			if (temp->right)
				return temp->right;
		}
		else if ((temp->right) == node)
		{
			if (temp->left) 
				return temp->left;
		}
	}
	return NULL;
}		
