#include "binary_trees.h"

/**
* binary_tree_is_root - function that checks if a given node is a root
* @node: pointer to the node to check
*
* Return: 1 if node is a root, otherwise 0. if node is NULL 0 too
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
/* In C, if a condition is true, the return value */
/* is automatically evaluated to 1. */
}
