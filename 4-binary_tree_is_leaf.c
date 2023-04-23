#include "binary_trees.h"
/**
  * binary_tree_is_leaf - function checks if a node
  *                       is a leaf.
  * @node: pointer to the node to check.
  * Return: 1 if node is a leaf, otherwise 0 if not
  *                             0 on fail,0 if NULL.
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
