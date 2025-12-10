#include "binary_trees.h"

/**
 * tree_height - measures height of a binary tree
 * @tree: pointer to the tree
 *
 * Return: height or 0 if NULL
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * is_perfect - recursive checker for perfect tree
 * @tree: pointer to node
 * @depth: depth of current node
 * @leaf_depth: expected depth of leaves
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int is_perfect(const binary_tree_t *tree, int depth, int leaf_depth)
{
	if (tree == NULL)
		return (1);

	/* If leaf: must be at same depth */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == leaf_depth);

	/* Node with only one child → not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth + 1, leaf_depth) &&
			is_perfect(tree->right, depth + 1, leaf_depth));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h;

	if (tree == NULL)
		return (0);

	h = (int)tree_height(tree) - 1; /* leaf depth expectation */

	return (is_perfect(tree, 0, h));
}
