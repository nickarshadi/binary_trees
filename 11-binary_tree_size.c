#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of the binary tree.
 * @tree: Is a pointer to the root node.
 * Return: if tree is NULL return 0 else size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
