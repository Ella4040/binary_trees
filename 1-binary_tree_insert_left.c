#include "binary_trees.h"

/*
 *binary_tree_insert_left : A function that inserts a node as the left-child of another node.
 *@parent : A pointer to the node to insert the left-child in.
 *@value : A pointer to the node to insert the left-child in.
 *return a pointer to the created node, or NULL on failure or if parent is NUL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Checks if the parent is NULL, in which case the function cannot insert a node on the left.*/
	if (parent == NULL)
	{
		return (NULL);
	}	

	/*Creates a new node with the specified value.*/
	binary_tree_t *new = binary_tree_node(parent, value);
	if (new == NULL)
	{
		return (NULL);
	}

	/*If the parent node already has a left child, rearranges the links*/
	if (parent->left != NULL)
	{
	new->left = parent->left; /* The new node points to the old left child of the parent*/
	parent->left->parent = new; /*Updates the parent of the old left child to point to the new nod*/
	}
	parent->left = new; /*Updates the left child of the parent to point to the new node*/

	/*Return a pointer to the new node*/
	return (new);
}
