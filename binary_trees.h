#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Standard Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




/* Data Structures */

/* Simple Binary Tree */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

/**
 * binary_tree_t - Typedef for the binary_tree_s struct
 */
typedef struct binary_tree_s binary_tree_t;

/**
 * bst_t - Typedef for BST
 */
typedef struct binary_tree_s bst_t;

/**
 * avl_t - Typedef for AVL binary trees
 */
typedef struct binary_tree_s avl_t;

/**
 * heap_t - Typedef for max binary heaps
 */
typedef struct binary_tree_s heap_t;




/* Function Prototypes */
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);




#endif /* BINARY_TREES_H */
