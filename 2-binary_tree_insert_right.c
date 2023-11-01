#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 * Return: pointer to the created node, NULL on failure or if parent is NULL
 * Description: If parent already has right-child, new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	else
		parent->right = new_node;
	
	return (new_node);
}