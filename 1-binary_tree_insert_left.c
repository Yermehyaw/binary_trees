#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: int value for new left node
 *
 * Return: Memory location of new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent; /* the new node's parent is @parent */
	temp = parent->left; /* Save any preexisting left node in parent */
	parent->left = node; /* before letting the new node usurp it */
	node->left = temp; /* it then becomes left child of the new node */
	return (node);
}
