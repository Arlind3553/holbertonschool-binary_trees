#include "binary_trees.h"
#include "proxy_height.c"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the binary tree to measure.
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side, right_side, balance;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	balance = left_side - right_side;

	return (balance);
}
