#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert the left-child of node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = malloc(sizeof(binary_tree_t));
	/*binary_tree_t *temp;*/

	if (!new_left_node || parent == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}
	parent->left = new_left_node;

	new_left_node->parent = parent;
	new_left_node->n = value;
	new_left_node->right = NULL;

	return (new_left_node);
}
