// Find the node with maximum value in binary tree
#include <iostream>
#include <climits>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int findMaxValue(Node* root) {
    if(root == NULL) return INT_MIN;
    int lMax = findMaxValue(root->left);
    int rMax = findMaxValue(root->right);
    return max(root->data, max(lMax, rMax));
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(5);
    root->left->left = new Node(30);
    root->left->right = new Node(15);
    
    int maxValue = findMaxValue(root);
    cout << "Maximum value in the binary tree: " << maxValue << endl;

    
    return 0;
}