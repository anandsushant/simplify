#include "../include/BinaryTree.h"

#include <queue>
#include <vector>
#include <algorithm>
#include <iostream>

void inorder_base(BinaryTreeNode* node, std::vector<int>& temp){
    if (node == NULL) return;
    inorder_base(node->left, temp);
    temp.push_back(node->value);
    inorder_base(node->right, temp);
}
std::vector<int> inorder(BinaryTreeNode* node){
    if (node == NULL) return {};
    std::vector<int> traverse;
    inorder_base(node, traverse);
    return traverse;
}
void preorder_base(BinaryTreeNode* node, std::vector<int>& temp){
    if (node == NULL) return;
    temp.push_back(node->value);
    preorder_base(node->left, temp);
    preorder_base(node->right, temp);
}
std::vector<int> preorder( BinaryTreeNode* node){
    if (node == NULL) return {};
    std::vector<int> traverse;
    preorder_base(node, traverse);
    return traverse;
}
void postorder_base(BinaryTreeNode* node, std::vector<int>& temp){
    if (node == NULL) return;
    postorder_base(node->left, temp);
    postorder_base(node->right, temp);
    temp.push_back(node->value);
}
std::vector<int> postorder( BinaryTreeNode* node){
    if (node == NULL) return {};
    std::vector<int> traverse;
    postorder_base(node, traverse);
    return traverse;
}
std::vector<std::vector<int>> levelorder( BinaryTreeNode* node) {
    return {};
}
