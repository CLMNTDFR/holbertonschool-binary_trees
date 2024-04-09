#include "binary_trees.h"

/**
* binary_tree_leaves - function that counts the leaves in a binary tree
* @tree: pointer to the root node of the tree to count the number of leaves
*
* Return: number of leaves, or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;

	if (tree == NULL)
		return (0);

/* check if a node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

/* recursive function to browse left side AND right side of each node */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

/* return add of left and right sides */
	return (left_leaves + right_leaves);
}
