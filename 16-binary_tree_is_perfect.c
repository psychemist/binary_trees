#include "binary_trees.h"
/**
 * get_left_subtree_height - finds the height of left binary subtree
 * @tree: pointer to the root node of the tree to check
 * Return: height of tree or 0 (NULL tree)
 */
int get_left_subtree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (get_left_subtree_height(tree->left) + 1);
}

/**
 * get_right_subtree_height - finds the height of left binary subtree
 * @tree: pointer to the root node of the tree to check
 * Return: height of tree or 0 (NULL tree)
 */
int get_right_subtree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (get_right_subtree_height(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 (perfect) or 0 (non-perfect tree)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree && !tree->left && !tree->right)
		return (1);

	int left_height = get_left_subtree_height(tree);
	int right_height = get_right_subtree_height(tree);

	if (left_height == right_height)
	{
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
