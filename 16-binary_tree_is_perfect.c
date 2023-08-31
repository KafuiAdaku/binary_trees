#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: The height of the tree. If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: The size of the tree. If tree is NULL, the function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a perfect binary tree, otherwise 0.
 * If tree is NULL, your function must return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_height;
	size_t expected_size;
	size_t tree_size;

	if (tree == NULL)
		return (0);

	tree_height = binary_tree_height(tree);
	expected_size = (1 << (tree_height + 1)) - 1;
	tree_size = binary_tree_size(tree);

	return (tree_size == expected_size);
}
