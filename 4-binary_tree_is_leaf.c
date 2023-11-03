#include "binary_trees.h"

/**
 * binary_tree_is_leaf: A function that checks if a node is a leaf.
 * @node: A pointer to the node to check.
 * Return: return 1 if node is a root otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
