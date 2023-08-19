#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *@tree: A pointer to the node to measure the depth.
 *Return: Depth of the node. If @tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		parent = binary_tree_depth(tree->parent);
	else
		return (0);

	return (parent + 1);
}
