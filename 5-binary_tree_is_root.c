#include "binary_trees.h"

/**
 * binary_tree_is_root - verify if a given node is a root
 *
 * @node: ptr to the node to verify
 * Return: 1 if node is a root, else 0
 * If NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
