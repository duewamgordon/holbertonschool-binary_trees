#include "binary_trees.h"

/**
 * binary_tree_zero_two_node - check the node
 * @tree: points to binary_tree_t
 * Return: size_t
 */
size_t binary_tree_zero_two_node(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, yes = 0;

	if (tree == NULL)
		return (1);

	left_height = binary_tree_zero_two_node(tree->left);
	right_height = binary_tree_zero_two_node(tree->right);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		yes = 1;

	return (yes * left_height * right_height);
}

/**
 * binary_tree_is_full - checks to see if the binary tree is full
 * @tree: points to a binary_tree_t
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int) binary_tree_zero_two_node(tree));
}
