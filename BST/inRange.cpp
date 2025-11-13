#include <iostream>
#include <climits>

struct TreeNode
{
  int data;
  TreeNode* left;
  TreeNode* right;

  explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

int inRange(TreeNode* root, int low, int high){
    if(!root) return 0;
    int count = 0;
    if(root->data >= low && root->data <= high){
        count++;
    }
       
    count += inRange(root->left, low, high);
    count += inRange(root->right, low, high);
    return count;
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
    std::cout<<inRange(root, 3, 9);
}