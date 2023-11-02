#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: a pointer to the node to find the sibling
 * Return: ptr to node. NULL if parent is NULL or node has no sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (!(node))
		return (NULL);
	if (!(node->parent))
		return (NULL);
	p = node->parent;
	if (p->left == node)
		return (p->right);
	else
		return (p->left);
}
