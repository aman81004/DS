// Implementation of binary tree creation
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree(){
    int data;
    cout<<"Enter data (-1 for no node): ";
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter left child of "<<data<<": ";   
    root->left = createTree();
    cout<<"Enter right child of "<<data<<": ";
    root->right = createTree();
    return root;
}

Node* display(Node* root){
    if(root == NULL){
        return NULL;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
    return root;
}

int main() {
    Node* root = createTree();
    cout<<"Preorder Traversal: ";
    display(root);
    cout<<endl;
    return 0;
}