#include "binary_trees.h"

/**
 * _binary_tree_height - Measure the height of a binary tree.
 * @tree: Is a pointer to the root node.
 * Return: 0 if tree is NULL else height.
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (((a) > (b) ? (a) : (b)) + 1);
}

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Is a pointer to the root node.
 * Return: 0 if tree is NULL else height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_binary_tree_height(tree) - 1);
}
