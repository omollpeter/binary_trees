#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Pointer to the node to insert a new parent
 * @value: Value to store in the new node
 *
 * Return: pointer to the created node, NULL otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);

	if (parent->left)
	{
		new->left = parent->left;
	}

	parent->left = new;

	return (new);
}
