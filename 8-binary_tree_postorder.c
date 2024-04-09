#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using postorder traversal
 * @tree: A pointer to the root node of the binary tree to traverse.
 * @func: A pointer to the function to be called for each node visited.
 *
 * Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
