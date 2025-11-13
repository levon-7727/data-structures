#include <iostream>
#include <climits>

struct TreeNode
{
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

int max(TreeNode* root) {
  if (!root) return INT_MAX;

  TreeNode* tmp = root;
  while (tmp->right) {
    tmp = tmp->right;
  }
  return tmp->data;
}

int min(TreeNode* root) {
  if (!root) return INT_MIN;

  TreeNode* tmp = root;
  while (tmp->left) {
    tmp = tmp->left;
  }
  return tmp->data;
}

int main() {
  TreeNode* root = nullptr;
  root = insert(root, 5);
  root = insert(root, 3);
  root = insert(root, 7);
  root = insert(root, 1);

  std::cout << max(root) << " " << min(root);
}