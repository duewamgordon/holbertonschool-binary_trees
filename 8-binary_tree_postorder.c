#include "binary_trees.h"

/**
 * binary_tree_postorder - Uses a binary tree for post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Description: traverses the binary tree in post-order and applies the provided
 * function to each node's value. Recursively traverses the left
 * subtree, then the right subtree, and finally applies the function to the
 * current node's value.
 *
 * If @tree is NULL or if @func is NULL, the function does nothing.
 *
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to a function that takes an integer parameter.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
