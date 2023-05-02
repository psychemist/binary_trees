#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the root node to insert the right-child
 * @value: value to store in the new node
 * Return: pointer to created node (SUCCESS), or NULL (FAILURE or null parent)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;

	return (node);
}
