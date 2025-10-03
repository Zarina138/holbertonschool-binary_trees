#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - finding the size of tree
 * @tree: pointer to the root node
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
