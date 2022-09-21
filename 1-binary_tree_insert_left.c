#include "binary_trees.h"

/**
 * binary_tree_insert_left -inserts a node as the left-child of another node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->n = value;
		new_node->right = NULL;
		return (new_node);
	}
	else
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = tmp;
		new_node->n = value;
		new_node->right = NULL;
		tmp->parent = new_node;
		return (new_node);
	}
}
