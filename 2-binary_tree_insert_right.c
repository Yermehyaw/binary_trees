#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: int value for new right node
 *
 * Return: Memory location of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
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
	temp = parent->right; /* Store any preexisting right node in parent */
	parent->right = node; /* before letting the new node usurp it */
	node->right = temp; /* it then becomes right child of the new node */
	return (node);
}
