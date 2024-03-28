#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_depth(tree);
	if (depth)
	{
		if (tree->left && tree->right)
			return (1);
		else
			return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else
			return (0);
	}
	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

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
