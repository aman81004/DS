// Level Order Traversal of a Binary Tree (Right to Left)

#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int levelOrderRightLeft( Node* root ){
    if( !root ) return 0 ;
    queue<Node*> q ;
    q.push( root ) ;
    int level = 0 ;

    while( !q.empty() ){
        int size = q.size() ;
        level++ ;

        for( int i = 0 ; i < size ; i++ ){
            Node* current = q.front() ;
            q.pop() ;

            // Push right child first for right-to-left traversal
            if( current->right ) q.push( current->right ) ;
            if( current->left ) q.push( current->left ) ;
        }
    }

    return level ;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Level Order Traversal Height (Right to Left): " << levelOrderRightLeft(root) << endl;

    // Clean up memory (not shown here for brevity)

    return 0;
}