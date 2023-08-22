#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *@tree: A pointer to the root node of the tree to count leaves.
 *Return: Number of leaves in the tree. If @tree is NULL, returns 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = binary_tree_leaves(tree->left);
	right_height = binary_tree_leaves(tree->right);

	return (left_height + right_height);
}
