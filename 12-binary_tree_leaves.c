#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: If tree is NULL, return 0 && A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int x = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		x += 1;
	x += binary_tree_leaves(tree->left);
	x += binary_tree_leaves(tree->right);
	return (x);
}
