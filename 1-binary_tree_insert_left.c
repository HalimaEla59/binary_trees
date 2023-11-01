#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	if (!(parent))
		return (NULL);
  
	new_node = malloc(sizeof(binary_tree_t));
	if (!(new_node))
		return (NULL);
  
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
		parent->left = new_node;
	return (new_node);
}
