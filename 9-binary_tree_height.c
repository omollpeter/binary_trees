#include "binary_trees.h"

/**
 * height_ - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Height of the tree
 */
size_t height_(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = height_(tree->left);
	right = height_(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_height - Computes the a ctual height of a binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Actual height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = height_(tree);
	if (height)
		return (height - 1);
	return (height);
}
