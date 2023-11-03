#include "binary_trees.h"

/**
 * binary_tree_delete :A function that deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)/*If tree is NULL, do nothing*/
	{
		binary_tree_delete(tree->left);/*delete the left subtrees*/
		binary_tree_delete(tree->right);/*delete theright subtrees*/
		free(tree);
	}
}
