#include "binary_trees.h"

/**
 * binary_tree_is_leaf - finds if a node is a leaf
 *
 * @node: pointer to the node to verify
 * Return: 1 if node is a leaf, else 0
 * If NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
