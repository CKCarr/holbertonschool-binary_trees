#include "binary_trees.h"
/**
  * binary_tree_balance - function that measures the
  * balance factor of a binary tree.
  * @tree: pointer to root node of a binary tree.
  * Return: measure difference of left - right,
  * or 0 if tree is NULL
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_ht = 0, right_ht = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	left_ht = binary_tree_height(tree->left);
	if (tree->right)
	right_ht = binary_tree_height(tree->right);

	return (left_ht - right_ht);
}
