#include "binary_trees.h"


/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: A pointer to the node to find the uncle of
 *
 * Return: A pointer to the uncle node, or NULL if no uncle exists
 *
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);
	}
	else
	{
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);
	}

	return (NULL);
}
