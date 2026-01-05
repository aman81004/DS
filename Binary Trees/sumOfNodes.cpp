// Sum of all nodes in the binary tree
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int sumOfNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
}


int main() {
    // Creating a sample binary tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(20);

    cout << "Sum of all nodes in the binary tree: " << sumOfNodes(root) << endl;

    // Clean up memory (not shown for brevity)

    return 0;
}