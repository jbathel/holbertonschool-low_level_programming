#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Data stored in new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = (binary_tree_t*) malloc(sizeof(binary_tree_t));
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
