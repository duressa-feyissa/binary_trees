#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int x, y;

	if (tree == NULL)
	{
		return (0);
	}

	x = binary_tree_size(tree->left);
	y = binary_tree_size(tree->right);
	return (x + y + 1);
}
