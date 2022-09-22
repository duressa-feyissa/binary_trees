#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the return 0 and A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int x = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		x += 1;
	x += binary_tree_nodes(tree->left);
	x += binary_tree_nodes(tree->right);
	return (x);
}
