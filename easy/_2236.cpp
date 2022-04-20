#include <iostream>

/* Definition for a binary tree node. */
struct TreeNode {
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(): val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool checkTree(TreeNode* root) {
    return root->left->val + root->right->val == root->val;
}

int main() {

    TreeNode *left = new TreeNode(4);
    TreeNode *right = new TreeNode(6);
    TreeNode *root = new TreeNode(10, left, right);

    std::cout << checkTree(root) << std::endl;

    return -1;
}

/*
You are given the root of a binary tree that consists of exactly 3 nodes: 
the root, its left child, and its right child.

Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.
*/
