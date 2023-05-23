#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node (SUCCESS) or NULL (FAIL)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent->parent)
	{
		if (node->parent->parent->left == node->parent)
		{
			if (node->parent->parent->right)
				return (node->parent->parent->right);
			else
				return (NULL);
		}
		else if (node->parent->parent->right == node->parent)
		{
			if (node->parent->parent->left)
				return (node->parent->parent->left);
			else
				return (NULL);
		}
	}
	return (NULL);
}
