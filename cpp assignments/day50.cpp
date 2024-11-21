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

//Question 2
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int findMin(Node* root) {
    if (!root) return -1;
    if (!root->left) return root->data;
    return findMin(root->left);
}

int main() {
    Node* root1 = new Node(20);
    root1->left = new Node(10);
    root1->right = new Node(30);
    root1->left->left = new Node(5);
    root1->left->right = new Node(15);

    Node* root2 = new Node(50);
    root2->left = new Node(40);
    root2->left->left = new Node(30);

    cout << findMin(root1) << endl;
    cout << findMin(root2) << endl;

    return 0;
}

