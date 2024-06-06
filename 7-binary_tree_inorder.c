#include "binary_trees.h"

/**
 * binary_tree_inorder - Print a binary tree in preorder transversal
 * @tree: binary tree
 * @func: print function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);/*mem address is passed as func*/
	(*func)(tree->n);
	binary_tree_inorder(tree->right, func);
}
