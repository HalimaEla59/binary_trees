#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to lowest common ancestor. Otherwise NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *pa1, *pa2;

	if (!(first) || !(second))
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	pa1 = first->parent, pa2 = second->parent;
	if ((first == pa1) || !(pa2) || (!(pa2->parent) && pa1))
		return (binary_trees_ancestor(first, pa1));
	else if ((pa2 == second) || !(pa1) || (!(pa1->parent) && pa2))
		return (binary_trees_ancestor(pa2, second));
	return (binary_trees_ancestor(pa2, pa1));
}
