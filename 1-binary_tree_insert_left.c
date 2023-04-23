#include "binary_trees.h"
/**
  * binary_tree_insert_left - inserts a node as the left
  *                           child of another node.
  * @parent: pointer to the node to insert the new node
  * @value: the value stored in the new node.
  * Return: binary_tree_t type pointer to the new node,
  *         NULL on fail or parent is NULL.
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left->child;
	}
	parent->left = left_child;

	return (left_child);
}
