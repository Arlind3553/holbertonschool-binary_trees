#include "binary_trees.h"
#include "proxy_height.c"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the binary tree to measure.
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_side = binary_tree_height(tree->left);
	int right_side = binary_tree_height(tree->right);
	int balance = left_side - right_side;

	return (balance);
}
