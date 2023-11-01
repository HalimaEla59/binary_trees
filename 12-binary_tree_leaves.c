#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: count of leaves, If tree is NULL 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf, right_leaf;

	if (!(tree))
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	return (left_leaf + right_leaf);
}
