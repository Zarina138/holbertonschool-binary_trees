#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *parent_parent;

	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	parent_parent = parent->parent;

	if (parent_parent->left == parent)
		return (parent_parent->right);
	else
		return (parent_parent->left);
}
