#include "binary_trees.h"
/**
  * binary_tree_height - Measures the height of a
  *                      binary tree.
  *@tree: points to root node of the tree to measure.
  * Return: the height of the tree, or 0 if @tree NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	height = binary_tree_height(tree->left);

	if (height < binary_tree_height(tree->right))
	{
		height = binary_tree_height(tree->right);
	}
	return (height + 1);
}


/**
  * binary_tree_is_perfect - function that measures the
  * balance factor of a binary tree.
  * @tree: pointer to root node of a binary tree.
  * Return: measure difference of left - right,
  * or 0 if tree is NULL
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_ht = 0, right_ht = 0;

	if (!tree)
	{
		return (0);
	}
	left_ht = binary_tree_height(tree->left);
	right_ht = binary_tree_height(tree->right);

	if (left_ht == right_ht)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		if (tree->left != NULL && tree->right != NULL)
		{
			return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
		}
	}
	return (0);
}
