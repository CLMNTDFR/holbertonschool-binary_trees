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

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);

	if (right_tree_height > left_tree_height)
		return (right_tree_height + 1);
	else
		return (left_tree_height + 1);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node
* Return: Balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}

	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}

	return ((int)left_height - (int)right_height);
}
