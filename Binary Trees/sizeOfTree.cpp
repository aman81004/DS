//Find size of binary tree
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
int sizeOfTree(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}
int main() {
    // Creating a sample binary tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(20);

    cout << "Size of the binary tree: " << sizeOfTree(root) << endl;

    // Clean up memory (not shown for brevity)

    return 0;
}