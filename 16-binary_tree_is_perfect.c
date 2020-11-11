#include "binary_trees.h"

/**
 * _binary_tree_height - helper func for binary_tree_height
 * @tree: input tree
 * Return: height of tree
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (((a) > (b) ? (a) : (b) )+ 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: input tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: input binary tree
 * Return: number of descendant child nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - CHeck if a binary tree is perfect.
 * @tree: Is a pointer to the root node.
 * Return: Boolean
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height;

	if (!tree)
		return (0);
	size = (int)binary_tree_size(tree);
	height = binary_tree_height(tree);
	return (size == (2 << height) - 1);
}
