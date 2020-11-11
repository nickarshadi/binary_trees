#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node.
 * @tree: Is a pointer to the node to measure the depth.
 * Return: If tree is NULL return 0 else depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		counter++;
		tree = tree->parent;
	}
	return (counter);
}
