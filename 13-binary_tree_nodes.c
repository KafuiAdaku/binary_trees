#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: The number of nodes with atleast a child.
 * If tree is NULL, the function must return 0. A NULL pointer is not a node.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;
	size_t left_node = 0;
	size_t right_node = 0;

	if (tree == NULL)
		return (0);

	node = (tree->left || tree->right) ? 1 : 0;
	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	return (node + left_node + right_node);
}
