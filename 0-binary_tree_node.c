#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 * @parent: Parent node
 * @value: int value stored in @parent
 *
 * Description: Allocates memory for a node and initializes the node with the
 * value passed. This mem address is then connected to a node passed in @parent
 *
 * Return: Memory address of node (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
