#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling- finds the sibling of a node
 * @node: pointer to the node to find
 * Return:  NULL if node is NULL or parent is NULL
 *  or node has no sibbling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
