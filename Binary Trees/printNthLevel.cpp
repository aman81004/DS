// Print element of nth level in a binary tree

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void printNthLevel(Node* root, int n) {
    if (root == nullptr) {
        return;
    }
    if (n == 0) {
        cout << root->data << " ";
        return;
    }
    printNthLevel(root->left, n - 1);
    printNthLevel(root->right, n - 1);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int n = 2; // Change this value to print different levels
    cout << "Elements at level " << n << ": ";
    printNthLevel(root, n);
    cout << endl;

    return 0;
}

