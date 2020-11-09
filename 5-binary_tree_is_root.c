#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a given node is a root.
 * @node: Node is a pointer to the node to check.
 * Return: 1 if is root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->parent);
}
