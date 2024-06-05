#include "binary_trees.h"

void free_subtree(binary_tree_t *subtree);

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *subtree_left;
	binary_tree_t *subtree_right;

	subtree_left = tree->left;
	subtree_right = tree->right;
	free_subtree(subtree_left); /* recursively free left subtree */
	free_subtree(subtree_right); /* recursively free right subtree */
	free(tree);
}


/**
 * free_subtree - Recursively frees a binary tree
 * @subtree: root node or subtree
 */

void free_subtree(binary_tree_t *subtree)
{
	if (subtree != NULL)
	{
		/* call recursively to all left and right nodes */
		free_subtree(subtree->left);
		free_subtree(subtree->right);
		/* Free all left and right nodes recursively */
		/*free(subtree->left);
		  free(subtree->right);*/
	}
	free(subtree);
}
