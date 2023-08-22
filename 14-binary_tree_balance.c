#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Points to a binary_tree_t
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0, to_add = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left || tree->right)
		to_add = 1;

	if (left_height >= right_height)
		return (to_add + left_height);
	else
		return (to_add + right_height);
}

/**
 * binary_tree_balance - balance of binary tree
 * @tree: points to binary_tree_t
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left)
		left_height++;
	if (tree->right)
		right_height++;

	return ((int) (left_height - right_height));
}
