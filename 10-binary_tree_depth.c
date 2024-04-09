#include "binary_trees.h"

/**
* binary_tree_depth - function that measures depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
*
* Return: depth of the tree, or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
/* if tree->parent is NULL, we are on the root */
	if (tree == NULL || tree->parent == NULL)
		return (0);

/* recursive function until root, and add 1 because depth of the root is 0 */
	return (binary_tree_depth(tree->parent) + 1);
}
