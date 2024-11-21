//Question 1
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

bool search(Node* root, int value) {
    if (!root) return false;
    if (root->data == value) return true;
    return search(root->left, value) || search(root->right, value);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(18);

    cout << (search(root, 7) ? "true" : "false") << endl;
    cout << (search(root, 20) ? "true" : "false") << endl;

    return 0;
}
