#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);

	right_height = binary_tree_size(tree->right);
	left_height = binary_tree_size(tree->left);

	return (1 + right_height + left_height);
}
