#include<iostream>
#include<queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void levelOrder( Node* root ){ 
    queue<Node*> q ;
    q.push( root ) ;

    while( !q.empty() ){
        Node* temp = q.front() ;
        q.pop() ;
        cout << temp->data << " " ;
        if( temp->left ) q.push( temp->left ) ;
        if( temp->right ) q.push( temp->right ) ;        
    }

    cout << endl ;

}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Level Order Traversal: ";
    levelOrder(root);

    return 0;
}