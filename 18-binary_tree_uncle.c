#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to uncle. If node is NULL or no uncle NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *pa, *grandpa;

	if (!(node) || !(node->parent))
		return (NULL);
	pa = node->parent;
	grandpa = pa->parent;
	if (grandpa)
	{
		if (grandpa->left == pa)
			return (grandpa->right);
		return (grandpa->left);
	}
	return (NULL);
}
