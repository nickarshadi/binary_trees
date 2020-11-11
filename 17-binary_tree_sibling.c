#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node.
 * @node: Is a pointer to the node.
 * Return: A pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (node->parent->left == node
							? node->parent->right
							: node->parent->left);
}
