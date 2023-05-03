#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of tree or 0 (NULL tree)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_tree = binary_tree_height(tree->left);
	int right_tree = binary_tree_height(tree->right);

	return (left_tree - right_tree);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 (NULL tree)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)) + 1);
}

/**
 * max - finds the maximum number of two integers
 * @x: first integer
 * @y: second integer
 * Return: max number
 */
size_t max(size_t x, size_t y)
{
	return (x > y ? x : y);
}
