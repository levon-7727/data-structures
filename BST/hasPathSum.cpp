#include <iostream>
#include <climits>

struct TreeNode
{
  int data;
  TreeNode* left;
  TreeNode* right;

  explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

bool hasPathSum(TreeNode* root, int sum){
    if(!root  root->data > sum) return false;
    if(!root->left && !root->right){ 
        return root->data == sum;
    }
    sum -= root->data;
    
    return hasPathSum(root->left, sum)  hasPathSum(root->right, sum);
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
    root->left = new TreeNode(4);
    root->right = new TreeNode(7);
    root->right->right = new TreeNode(8);
    root->right->right->right = new TreeNode(11);
    std::cout<<hasPathSum(root, 30);
}