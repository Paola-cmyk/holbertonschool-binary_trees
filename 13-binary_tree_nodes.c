#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * at least 1 child in the binary tree
 * @tree: pointer to the root of the tree
 * Return: number of nodes with at least 1 child, if tree is NUll return 0
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

