#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
    int l = 0, r = 0;

    if (tree->left && tree->right)
    {
        l = 1 + tree_is_perfect(tree->left);
        r = 1 + tree_is_perfect(tree->right);
        if (r == l && r != 0 && l != 0)
            return (r);
        return (0);
    }
    else if (!tree->left && !tree->right)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

/**
 * binary_tree_is_perfect - A function that checks if binary tree is perfect.
 * @tree: A pointer to the root of the tree.
 * Return: 1 if binary tree is perfect or 0 in otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int result = 0;

    if (tree == NULL)
    {
        return (0);
    }
    else
    {
        result = tree_is_perfect(tree);
        if (result != 0)
        {
            return (1);
        }
        return (0);
    }
}
