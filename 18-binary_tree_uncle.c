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
	int x;

	if (node == NULL)
		return (NULL);

	if (node->parent)
	{
		x = (node->parent)->n;
		if ((node->parent)->parent)
		{
			return (x != (((node->parent)->parent)->left)->n
				? (((node->parent)->parent)->left)
				: ((node->parent)->parent)->right);
		}
	}
	return (NULL);
}
