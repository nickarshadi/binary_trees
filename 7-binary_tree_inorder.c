#include "binary_trees.h"

/**
 * binary_tree_inorder - GO through a tree in in-oder traversal
 * @tree: piunter to the root node
 * @func: pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
