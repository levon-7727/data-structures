#include<iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int val) {
    if (!root) {
        root = new TreeNode(val);
        return root;
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return  root;
}

bool inOrder(TreeNode* root, int k, int& count, int& result) {
    if (!root) return false;

    if (inOrder(root->left, k, count, result)) { return true; }

    count++;
    if (count == k) {
        result = root->data;
        return true;
    }

    return (inOrder(root->right, k, count, result));
}

int kthElement(TreeNode* root, int k) {
    int count = 0;
    int result = 0;
    if (inOrder(root, k, count, result)) { return result; }

    std::cerr << "invalid k";
    exit(1);
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    root = insert(root, 4);
    std::cout << kthElement(root, 3);
}