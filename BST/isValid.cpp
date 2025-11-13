#include <iostream>

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;

    explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

bool isValid(TreeNode* root) {
    if (!root) return true;
    if (root->left && root->right) {
        if (root->left->data >= root->data || root->right->data <= root->data) {
            return false;
        }
    }
    else if (root->left && !root->right) {
        if (root->left->data >= root->data) {
            return false;
        }
    }
    else if (!root->left && root->right) {
        if (root->right->data <= root->data) {
            return false;
        }
    }

    else { return true; }

    return isValid(root->left) && isValid(root->right);
}


int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    std::cout << isValid(root);
}