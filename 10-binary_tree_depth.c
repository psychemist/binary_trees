#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node to measure the depth
 * Return: depth of tree or 0 (NULL tree)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
