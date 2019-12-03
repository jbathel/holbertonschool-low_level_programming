#include "binary_trees.h"

#define SUM(a, b) ((a) + (b))

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of leaves, if tree is NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (!(tree->left || tree->right))
        return (1);

    return (SUM(
                binary_tree_leaves(tree->left),
                binary_tree_leaves(tree->right)
               ));
}
