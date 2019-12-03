#include "binary_trees.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
 * _binary_tree_depth - Function that measures the depth of a node in a binary tree
 * @tree: Pointer to root node
 * Return: Depth of the node, if tree is NULL return 0
 */
size_t _binary_tree_depth(const binary_tree_t *tree)
{
    return (tree ? _binary_tree_depth(tree->parent) + 1 : 0);
}

/**
 * binary_tree_depth - Function that measures the depth of a node in a binary tree
 * @tree: Pointer to root node
 * Return: Depth of the node, if tree is NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return (tree ? _binary_tree_depth(tree->parent) : 0);
}
