#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of the tree or 0 if NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree_height;
	size_t right_tree_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);

	if (right_tree_height > left_tree_height)
		return (right_tree_height + 1);
	else
		return (left_tree_height + 1); /* add one for root counting*/
}

/**
 * binary_tree_is_perfect - function that check if a binary tree is perfect
 * @tree: pointer to the root of the tree to check
 * Return: 1 if perfect, otherwise 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
