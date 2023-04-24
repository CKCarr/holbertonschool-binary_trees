#include "binary_trees.h"
/**
  * binary_tree_leaves - function that counts the
  *                       leaves in a binary tree.
  * @tree: pointer to root node of tree to count
  *        the number of leaves.
  * Return: count of leaves, or 0 if tree NULL,
  * leaves = nodes at bottom of tree with no children
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
	}
}
