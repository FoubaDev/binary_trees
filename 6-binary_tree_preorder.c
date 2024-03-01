#include "binary_trees.h"

/**
 * binary_tree_preorder - run through a binary tree using pre-order
 *
 * @tree: ptr to the node root  of the tree to traverse
 * @func: ptr to a function to call for each node.
 * Value in the node must be a parameter
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
