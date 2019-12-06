#include "binary_trees.h"

/**
 * max - get the maximum of two values
 * @a: a value
 * @b: a value
 *
 * Return: the maximum of a and b
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);

}

/**
 * _binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node of the tree
 * @remaining: the number of levels left to recurse
 *
 * Return: If tree is NULL or the tree is not perfect, return 0.
 * Otherwise, return 1.
 */
int _binary_tree_is_perfect(const binary_tree_t *tree, size_t remaining)
{
	if (remaining)
		return (_binary_tree_is_perfect(tree->left, remaining - 1),
				_binary_tree_is_perfect(tree->right, remaining - 1));
	if (tree)
		return (!(tree->left || tree->right));
	return (0);

}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node of the tree
 *
 * Return: If tree is NULL or the tree is not perfect, return 0.
 * Otherwise, return 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *root = tree;
	size_t levels = 0;

	if (tree)
	{
		while ((tree = tree->left))
			++levels;
		return (_binary_tree_is_perfect(root, levels));

	}
	return (0);

}
