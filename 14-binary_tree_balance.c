#include "binary_trees.h"

/**
 * height_left - Measures the height of the left ST binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Height of the LST
 */
size_t height_left(const binary_tree_t *tree)
{
	size_t left;

	if (!tree)
		return (0);
	left = height_left(tree->left);

	return (1 + left);
}

/**
 * height_right - Measures the height of the right ST binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Height of the RST
 */
size_t height_right(const binary_tree_t *tree)
{
	size_t right;

	if (!tree)
		return (0);
	right = height_right(tree->right);

	return (1 + right);
}

/**
 * binary_tree_balance - Computes the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;
	size_t left, right;

	if (!tree)
		return (0);

	left = height_left(tree);
	right = height_right(tree);
	balance = (int) left - (int) right;
	return (balance);
}
