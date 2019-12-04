#include "binary_trees.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DIF(a, b) ((a) - (b))

/**
 * _binary_tree_height - Function that returns the height of binary tree
 * @tree: Pointer to root node of binary tree
 * Return: Height, if tree is NULL return 0
 */
int _binary_tree_height(const binary_tree_t *tree)
{
    return (tree ? MAX(
                _binary_tree_height(tree->left),
                _binary_tree_height(tree->right)
                ) + 1 : 0);
}

/**
 * binary_tree_balance - Function that checks whether a tree is balanced
 * @tree: Pointer to root node of binary tree
 * Return: balance factor, if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    return (tree ? DIF(
                _binary_tree_height(tree->left),
                _binary_tree_height(tree->right)
                ) : 0);
}

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to root node of binary tree
 * Return: Return 1, if tree is NULL or not perfect return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (!tree->left)
        return (!tree->right);

    if (!tree->right)
        return (!tree->left);

    return (binary_tree_is_full(tree->left) &&
            binary_tree_is_full(tree->right));
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to root node of binary tree
 * Return: Return 1, if tree is NULL or not perfect return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    return (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0);
}
