#include "binary_trees.h"

/**
 * _binary_tree_height - Helper function for the following func.
 * @tree: Is input tree.
 * Return: heihgt of the tree.
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
 * binary_tree_height - Measure the height.
 * @tree: Is an input tree.
 * Return: height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1 );
}

/**
 * binary_tree_balance - Measure the balance factor of the binary tree.
 * @tree: Is a pointer to the root node of the tree.
 * Return: if nULL return 0 else balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (a - b);
}
