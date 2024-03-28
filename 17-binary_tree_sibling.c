#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (!node)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	left = node->parent->left;
	right = node->parent->right;

	if (left == node)
	{
		if (right)
			return (right);
	}
	else if (right == node)
	{
		if (left)
			return (left);
	}
	return (NULL);
}
