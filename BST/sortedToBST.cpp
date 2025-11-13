#include <iostream>
#include <vector>

struct TreeNode
{
  int data;
  TreeNode* left;
  TreeNode* right;

  explicit TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

TreeNode* sortedToBST(std::vector<int>& vec){
    if(vec.empty()) return nullptr;
    int size = vec.size() / 2;
    TreeNode* root = new TreeNode(vec[size]);
    std::vector<int> vecL(vec.begin(), vec.begin() + size);
    std::vector<int> vecR(vec.begin() + size + 1, vec.end());
    root->left = sortedToBST(vecL);
    root->right = sortedToBST(vecR);
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
    std::vector<int> vec = {1, 2, 3, 4, 5};
    print(sortedToBST(vec));
    
}