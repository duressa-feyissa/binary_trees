#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 *         If node is NULL, return NULL
 *          If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent)
	{
		if ((node->parent)->parent)
		{
			return ((node->parent) != (((node->parent)->parent)->left)
				? (((node->parent)->parent)->left)
				: ((node->parent)->parent)->right);
		}
	}
	return (NULL);
}
