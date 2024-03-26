#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the node to insert a new parent
 * @value: Value to store in the new node
 *
 * Return: pointer to the created node, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);

	if (parent->right)
	{
		temp = parent->right;
		temp->parent = new;
		new->right = temp;
	}

	parent->right = new;

	return (new);
}
