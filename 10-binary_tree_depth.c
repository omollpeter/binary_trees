#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node of the tree
 *
 * Return: Depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *parent;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		parent = tree->parent;
		tree = parent;
	}

	return (depth);
}
