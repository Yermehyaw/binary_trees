#include "binary_trees.h"

void inorder_transversal(const binary_tree_t *tree, int *leaf_nodes);
size_t is_leaf(const binary_tree_t *node);

/**
 * binary_tree_leaves - Returns the no of leaf nodes in a BT
 * @tree: BT. The pointer to root node
 *
 * Return: A non-negative number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int *leaf_nodes, total;

	if (tree == NULL)
		return (0);
	leaf_nodes = malloc(sizeof(int));
	if (leaf_nodes == NULL)
		return (0);
	(*leaf_nodes) = 0; /* Init to 0 */
	inorder_transversal(tree, leaf_nodes);
	total = (*leaf_nodes);
	free(leaf_nodes);
	return(total);
}


/**
 * inorder_transversal - Tranverse throigh a BT via inorder transversal
 * while carrying out various operatiosn
 * @rtree: the binary tree
 * @leaf_nodes: operatiosn. Pointert to a mem location where no of leaf nodes is
 * stored
 */

void inorder_transversal(const binary_tree_t *tree, int *leaf_nodes)
{
	if (tree == NULL)
		return;
	if (is_leaf(tree))
		*leaf_nodes += 1;
	inorder_transversal(tree->left, leaf_nodes);
	inorder_transversal(tree->right, leaf_nodes);
}

/**
 * is_leaf - Checks if a node is a eaf node
 * @node: Pointer to a node in a binary tree
 *
 * Return: A positive number (Succcess)
 */

size_t is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
