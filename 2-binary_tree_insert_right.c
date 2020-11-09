#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of node.
 * @parent: Pointer to the node to insert the right child.
 * @value: Value to insert.
 * Return: Pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->n = value;
	bt->parent = parent;
	if (parent->right)
	{
		bt->right = parent->right;
		bt->right->parent = bt;
	}
	parent->right = bt;
	return (bt);
}
