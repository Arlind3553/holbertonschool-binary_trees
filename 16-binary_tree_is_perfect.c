#include "binary_trees.h"
#include "proxy_height.c"
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_side = binary_tree_height(tree->left);
	int right_side = binary_tree_height(tree->right);

	if (left_side == right_side)
	{
		return (1);
	}
	else
		return (0);
}
