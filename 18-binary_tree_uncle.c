#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return:  pointer to the sibling node.
 * If node is NULL or the parent is NULL, return NULL.
 * If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	/* Check if node has a sibling */
	if (!(parent->left) || !(parent->right))
		return (NULL);

	if (node == parent->left)
		return (parent->right);
	else
		return (parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *uncle = NULL;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	uncle = binary_tree_sibling(parent);

	return (uncle);
}
