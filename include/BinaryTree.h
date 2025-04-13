#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <vector>

    // standard definition of the structure of binary tree used
    // in all the member function of this BinaryTree.h file.
    struct BinaryTreeNode {
        int value;                        // value at the node
        BinaryTreeNode* left;         // left node of the current node
        BinaryTreeNode* right;        // right node of the current node

        BinaryTreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
        BinaryTreeNode(int val, BinaryTreeNode* left, BinaryTreeNode* right) : value(val), left(left), right(right) {}
    };

    // utility functions for other members of this file
    void inorder_base(BinaryTreeNode* node, std::vector<int>& temp);
    void preorder_base(BinaryTreeNode* node, std::vector<int>& temp);
    void postorder_base(BinaryTreeNode* node, std::vector<int>& temp);
    void levelorder_base(BinaryTreeNode* node, std::vector<int>& temp);

    // return the inorder transversal of the binary tree, in the form of std::vector
    std::vector<int> inorder(BinaryTreeNode* node);

    // return the preorder transversal of the binary tree, in the form of std::vector
    std::vector<int> preorder( BinaryTreeNode* node);

    // return the postorder transversal of the binary tree, in the form of std::vector
    std::vector<int> postorder( BinaryTreeNode* node);

    // return the levelorder transversal of the binary tree, in the form of std::vector
    std::vector<std::vector<int>> levelorder( BinaryTreeNode* node);

    // find(), finds the value (val) in the binary tree (with root node) provided and returns true or false
    bool find( BinaryTreeNode* node, int val);


#endif  // BINARY_TREE_H




// add a function for conversion of binary tree into a binary search tree bt_to_bst(root)
