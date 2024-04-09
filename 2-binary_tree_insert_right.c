#include "binary_trees.h"

/**
 * binary_tree_insert_right - main function that add a node to the left branch
 * @parent: parent node.
 * @value: store the data for the new nodes.
 *
 * Return: the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = parent->right;
	newNode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
	free(newNode);
}
