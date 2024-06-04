#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp_left;
	binary_tree_t *temp_right;

	if (tree == NULL)
		return (NULL);
	temp_left = tree->left;
	temp_right = tree->right;
	while (temp_left)
	{
		free(temp_left)
		temp_left = tree->left;
		tree->left = tree->left->left;
	}
}
