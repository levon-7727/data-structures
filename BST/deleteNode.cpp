#include <iostream>
#include <climits>

struct TreeNode
{
  int data;
  TreeNode* left;
  TreeNode* right;

  explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

int min(TreeNode* root) {
  if (!root) return INT_MIN;

  TreeNode* tmp = root;
  while (tmp->left) {
    tmp = tmp->left;
  }
  return tmp->data;
}

TreeNode* deleteNode(TreeNode* root, int k){
    if(!root) return nullptr;
    if(root->data == k){
        if(root->left && root->right){
            TreeNode* tmp = root;
            root->data = min(root->right);
            root->right = deleteNode(root->right, root->data);
            return root;
        }
        else if(!root->left){
            TreeNode* tmp = root;
            root = root->right;
            delete tmp;
            return root;
        }
        else if(!root->right){
            TreeNode* tmp = root;
            root = root->left;
            delete tmp;
            return root;
        }
        else{
            delete root;
        }
    }
    else{
        root->left = deleteNode(root->left, k);
        root->right = deleteNode(root->right, k);
    }
    return root;
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
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->right->right = new TreeNode(9);
    root = deleteNode(root, 7);
    print(root);
}