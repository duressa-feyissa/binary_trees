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
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int x = 0;
	int y = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		x += 1 + binary_tree_height(tree->left);
	if (tree->right)
		y += 1 + binary_tree_height(tree->right);
	return (max(x, y));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree
 *        to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int x = 0, y = 0;

	if (tree == NULL)
		return (0);
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);
	return (x - y);
}
