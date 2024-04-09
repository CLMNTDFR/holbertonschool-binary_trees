#include "binary_trees.h"

/**
 * binary_tree_sibling - function thats finds the sibling of a node
 * @node: pointer to the node where to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node
 * Return: pointer to the uncle node, otherwise NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
