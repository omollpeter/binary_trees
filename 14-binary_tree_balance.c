#include "binary_trees.h"

/**
 * height_st - Measures the height of the ST binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: Height of the ST
 */
size_t height_st(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = height_st(tree->left);
	right = height_st(tree->right);

	return (1 + (left > right ? left : right));
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

	left = height_st(tree->left);
	right = height_st(tree->right);
	balance = (int) left - (int) right;
	return (balance);
}
