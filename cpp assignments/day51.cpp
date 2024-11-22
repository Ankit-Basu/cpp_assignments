//Question 1
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int findDepth(TreeNode* root, int value, int depth) {
    if (!root) return -1;
    if (root->val == value) return depth;
    int left = findDepth(root->left, value, depth + 1);
    if (left != -1) return left;
    return findDepth(root->right, value, depth + 1);
}

int findMaxDepth(TreeNode* root, int value) {
    return findDepth(root, value, 1);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << findMaxDepth(root, 5) << endl;
    cout << findMaxDepth(root, 6) << endl;

    return 0;
}
