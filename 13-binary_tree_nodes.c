#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree to count the nodes
*
* Return: The number of nodes with at least 1 child, or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If current node has at least one child, add 1 */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
