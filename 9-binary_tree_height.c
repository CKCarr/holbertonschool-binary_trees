#include "binary_trees.h"
/**
  * binary_tree_height - Measures the height of a
  *                      binary tree.
  *@tree: points to root node of the tree to measure.
  * Return: the height of the tree, or 0 if @tree NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ht = 0, right_ht = 0;

	if (!tree)
		return (0);

	if (tree->left)
	left_ht = 1 + binary_tree_height(tree->left);
	if (tree->right)
	right_ht = 1 + binary_tree_height(tree->right);

	return (left_ht > right_ht ? left_ht : right_ht);
}
