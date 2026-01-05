//Find node with maximum value in binary tree
#include <iostream>
#include <climits>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int nodeWithMaxValue(Node* root) {
    if (root == nullptr) {
        return INT_MIN; // Return minimum integer value if tree is empty
    }
    int maxValue = root->data;
    int leftMax = nodeWithMaxValue(root->left);
    int rightMax = nodeWithMaxValue(root->right);

    if (leftMax > maxValue) {
        maxValue = leftMax;
    }
    if (rightMax > maxValue) {
        maxValue = rightMax;
    }
    return maxValue;
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(20);

    cout << "Node with maximum value in the binary tree: " << nodeWithMaxValue(root) << endl;

    // Clean up memory (not shown for brevity)

    return 0;
}