#include "binary_trees.h"

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: pointer to the node to check
*
* Return: 1 if node is a leaf, otherwise 0. if node is NULL 0 too
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->left == NULL && node->right == NULL);
/* In C, if a condition is true, the return value */
/* is automatically evaluated to 1. */
}
