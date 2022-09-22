#include "binary_trees.h"

/**
 * max - find maximum of the two number
 * @a: integer value
 * @b: integer value
 * Return: max value
 */

int max(int a, int b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int x, y;

	if (tree == NULL)
		return (-1);
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);
	return max(x, y) + 1;
}

