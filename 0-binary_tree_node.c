#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: a pointer to the parent node of a node to create
 * @value: the value to put in the new node
 * Return:  a pointer to the new node, or `NULL` on failure
 * When created, a node doesn't have any child
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
