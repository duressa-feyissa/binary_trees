#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if binary tree is perfect.
 * @tree: A pointer to the root of the tree.
 * Return: 1 if binary tree is perfect or 0 in otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
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
	x += 1 + binary_tree_height(tree->left);
	y += 1 + binary_tree_height(tree->right);
	return (x > y ? x : y);
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
