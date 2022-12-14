#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a new binary tree
 * @parent:  is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: to the newn node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
