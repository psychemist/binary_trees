#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the root node to insert the left-child
 * @value: value to store in the new node
 * Return: pointer to created node (SUCCESS), or NULL (FAILURE or null parent)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	node->left = parent->left;
	parent->left = node;
	if (node->left)
		node->left->parent = node;

	return (node);
}
