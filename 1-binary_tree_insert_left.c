#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL || parent == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->right = NULL;
	temp->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = temp;

	parent->left = temp;

	return (temp);
}
