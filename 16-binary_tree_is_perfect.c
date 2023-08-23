#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise. If @tree is NULL, returns 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree);
/**
* binary_tree_same_height - check if height is same for both subtrees
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_same_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (right_h == left_h)
		return (1);

	return (0);
}

/**
* binary_tree_zero_two_node - check if node has two or zero children
* @tree: pointer to binary_tree_t
*
* Return: size_t
*/
size_t binary_tree_zero_two_node(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0, yes = 0;

	if (tree == NULL)
		return (1);

	left_h = binary_tree_zero_two_node(tree->left);
	right_h = binary_tree_zero_two_node(tree->right);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		yes = 1;

	return (yes *  left_h * right_h);
}

