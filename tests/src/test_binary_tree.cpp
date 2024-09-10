#include "simplify.h"
#include <iostream>
#include <vector>
#include <queue>

void input(BinaryTreeNode*& root) {
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(3);
    root->left->left = new BinaryTreeNode(4);
    root->left->right = new BinaryTreeNode(5);
    root->left->right->left = new BinaryTreeNode(7);
    root->left->right->right = new BinaryTreeNode(8);
    root->right->right = new BinaryTreeNode(6);
    root->right->right->left = new BinaryTreeNode(9);
    root->right->right->right = new BinaryTreeNode(10);
}
void output(const std::vector<int> ans) {
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    } std::cout << std::endl;
    return;
}
int main() {
    BinaryTreeNode * node = new BinaryTreeNode(1);
    input(node);
    std::vector<int> ans;
    ans = inorder(node);
    output(ans);
    return 0;
}