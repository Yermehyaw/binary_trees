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

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->left != NULL) /* if parent already has a left child*/
	{
		temp = parent->left;
		parent->left = node; /* let the new node usurp it */
		node->left = temp; /* it then becomes left child of new node */
	}
	else /* no pre-existing left child */
		parent->left = node; /* the left chid of parent is new node */
	return (node);
}
