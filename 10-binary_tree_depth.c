#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *@tree: A pointer to the node to measure the depth.
 *Return: Depth of the node. If @tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;
	const binary_tree_t *node = tree;

	while (node->parent != NULL)
	{
		depth++;
		node = node->parent;
	}

	return depth;
}	
