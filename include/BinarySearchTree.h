#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <vector>

namespace bst {

    // standard definition of the structure of binary search tree used
    // in all the member function of this BinarySearchTree.h file.
    struct BinarySearchTreeNode {
        int value;                              // value at the node
        BinarySearchTreeNode* leftNode;         // left node of the current node
        BinarySearchTreeNode* rightNode;        // right node of the current node

        BinarySearchTreeNode(int val) : value(val), leftNode(nullptr), rightNode(nullptr) {}
        BinarySearchTreeNode(int val, BinarySearchTreeNode* left, BinarySearchTreeNode* right) : value(val), leftNode(left), rightNode(right) {}
    };

    std::vector<int> traverse;

    // utility functions for other members of this file
    static void inorder_base(BinarySearchTreeNode* node, std::vector<int>& temp);
    static void preorder_base(BinarySearchTreeNode* node, std::vector<int>& temp);
    static void postorder_base(BinarySearchTreeNode* node, std::vector<int>& temp);
    static void levelorder_base(BinarySearchTreeNode* node, std::vector<int>& temp);

    // return the inorder transversal of the binary search tree, in the form of std::vector
    static std::vector<int> inorder(const BinarySearchTreeNode* node);

    // return the preorder transversal of the binary search tree, in the form of std::vector
    static std::vector<int> preorder(const BinarySearchTreeNode* node);

    // return the postorder transversal of the binary search tree, in the form of std::vector
    static std::vector<int> postorder(const BinarySearchTreeNode* node);

    // return the levelorder transversal of the binary search tree, in the form of std::vector
    static std::vector<std::vector<int>> levelorder(const BinarySearchTreeNode* node);

    // find(), finds the value (val) in the binary search tree (with root node) provided and returns true or false
    static bool find(const BinarySearchTreeNode* node, int val);

    // inserts value (val) to the binary search tree (rooted at node). Make sure
    // that the node given is actually the root of your whole tree, otherwise, 
    // it may not remain a binary serach tree 
    static void insert(BinarySearchTreeNode* node, int val);

    // pops the smallest value from the binary search tree i.e. the value at the leftmost leafnode.
    static void pop_front(BinarySearchTreeNode* node);

    // pops the largest value from the binary search tree i.e. the value at the rightmost leafnode.
    static void pop_back(BinarySearchTreeNode* node);

}

#endif  // BINARY_SEARCH_TREE_H