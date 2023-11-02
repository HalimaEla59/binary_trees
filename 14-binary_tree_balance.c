#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance, tree is NULL 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	return (left - right);
}
