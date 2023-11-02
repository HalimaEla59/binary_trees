#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node
 * Return: balance
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!(tree))
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (binary_tree_is_leaf(tree));
	}

	return (0);
}
