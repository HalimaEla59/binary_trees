#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes, If tree is NULL 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node, numb_nodes = 0;

	if (!(tree))
		return (0);
	if (tree->left || tree->right)
		numb_nodes++;
	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);
	numb_nodes += (left_node + right_node);
	return (numb_nodes);
}
