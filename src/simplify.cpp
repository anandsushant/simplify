// #include "../simplify.h"
// #include "../include/BinaryTree.h"
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>

// // utility for preorder transversal
// void preorder_base(const BinaryTreeNode* node, std::vector<int>& temp) {
//     if (node == NULL) return;
//     std::cout << "hello2" << std::endl;
//     temp.push_back(node->value);
//     preorder_base(node->leftNode, temp);
//     preorder_base(node->rightNode, temp);
//     return;
// }
// std::vector<int> preorder(const BinaryTreeNode* node) {
//     if (node == nullptr) return {};
//     std::vector<int> traverse;
//     preorder_base(node, traverse);
//     return traverse;
// }

// int main () {
//     std::cout << "Hello" << std::endl;
//     return 0;
// }