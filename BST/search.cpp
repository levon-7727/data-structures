#include <iostream>

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

bool serach(TreeNode* root, int val) {
    if (!root) return false;
    if (root->data == val) {
        return  true;
    }

    if (val < root->data) {
        return  serach(root->left, val);
    }
    else {
        return serach(root->right, val);
    }
}

void print(TreeNode* root) {
    if (!root) {
        return;
    }
    print(root->left);
    std::cout << root->data << " ";
    print(root->right);
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 1);
    std::cout << serach(root, 5);
}