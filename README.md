# Binary Trees

A comprehensive C project implementing fundamental binary tree operations and algorithms.

## Overview

This project demonstrates core data structures and algorithms for working with binary trees in C. It includes implementations of various tree operations, traversals, and utility functions commonly used in computer science and software engineering.

## Project Structure

```
├── 0-binary_tree_node.c           # Create a new binary tree node
├── 1-binary_tree_insert_left.c    # Insert a node as left child
├── 2-binary_tree_insert_right.c   # Insert a node as right child
├── 3-binary_tree_delete.c         # Delete an entire binary tree
├── 4-binary_tree_is_leaf.c        # Check if node is a leaf
├── 5-binary_tree_is_root.c        # Check if node is root
├── 6-binary_tree_preorder.c       # Preorder traversal
├── 7-binary_tree_inorder.c        # Inorder traversal
├── 8-binary_tree_postorder.c      # Postorder traversal
├── 9-binary_tree_height.c         # Calculate tree height
├── 11-binary_tree_size.c          # Calculate tree size
├── binary_trees.h                 # Header file with structure definitions
└── Betty/                         # Code style checker (Holberton style guide)
```

## Features

- **Node Creation & Manipulation**: Create, insert, and delete tree nodes
- **Tree Traversals**: Implement preorder, inorder, and postorder traversals
- **Tree Properties**: Calculate height, size, and identify node types
- **Memory Management**: Proper allocation and deallocation of tree nodes
- **Code Quality**: Compliant with Betty style guide (Holberton standard)

## Data Structure

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

## Function Reference

### Node Operations
- `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)` - Create a new node
- `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)` - Insert left child
- `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)` - Insert right child
- `void binary_tree_delete(binary_tree_t *tree)` - Delete entire tree

### Tree Properties
- `int binary_tree_is_leaf(const binary_tree_t *node)` - Check if node is leaf
- `int binary_tree_is_root(const binary_tree_t *node)` - Check if node is root
- `size_t binary_tree_height(const binary_tree_t *tree)` - Get tree height
- `size_t binary_tree_size(const binary_tree_t *tree)` - Get tree size

### Tree Traversals
- `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))` - Preorder traversal
- `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))` - Inorder traversal
- `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))` - Postorder traversal

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o binary_trees
```

## Code Quality

All code is validated using the Betty style checker (Holberton's C code style guide):

```bash
./Betty/betty-style.pl <file.c>
./Betty/betty-doc.pl <file.c>
```

## Learning Objectives

- Understanding binary tree data structure fundamentals
- Implementing recursive algorithms
- Memory management in C
- Tree traversal techniques (DFS variants)
- Calculating tree properties (height, size)
- Writing clean, maintainable C code

## Author

Lucas Mettetal
Lorenzo Anselme

## License

This is an educational project from Holberton School.
