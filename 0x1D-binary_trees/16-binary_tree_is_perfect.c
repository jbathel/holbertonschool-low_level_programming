#include "binary_trees.h"

/**
 * max - Function that gets the maximum of two values
 * @a: First value
 * @b: Second value
 * Return: Maximum value of a and b
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}

/**
 * _binary_tree_height - Function that returns the height of binary tree
 * @tree: Pointer to root node of binary tree
 * Return: Height, if tree is NULL return 0
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
		return (max(_binary_tree_height(tree->left),
					_binary_tree_height(tree->right)) + 1);
	return (0);
}

/**
 * binary_tree_height - Function that returns the height of binary tree
 * @tree: Pointer to root node of binary tree
 * Return: Height, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
		return (max(_binary_tree_height(tree->left),
					_binary_tree_height(tree->right)));
	return (0);
}

/**
 * binary_tree_size - Function that measures size a tree
 * @tree: Pointer to root node of binary tree
 * Return: Size, if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) +
				binary_tree_size(tree->right) + 1);
	return (0);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to root node of binary tree
 * Return: Return 1, if tree is NULL or not perfect return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);

	do {
		if ((size & (1 << height)) == 0)
			return (0);
	} while (height >>= 1);

	return (1);
}
