#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of a node, if tree is NULL 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if ((!tree) || (!tree->parent))
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
