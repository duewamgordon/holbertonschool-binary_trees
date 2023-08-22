#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes in a binary tree with at least one child.
 *@tree: A pointer to the root node of the tree to count nodes.
 * Return: Number of nodes with at least one child. If @tree is NULL, returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0, to_add = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		to_add = 1;
	
	left_height = binary_tree_nodes(tree->left);
	right_height = binary_tree_nodes(tree->right);
	
	return (left_height + right_height + to_add);
}
