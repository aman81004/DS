/*
Given a binary tree , print boundary nodes of the binary tree
Anti clockwise starting from the root. 
*/

#include<iostream>
#include<queue>
#include<vector>
#include<climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* constructBFS( int arr[], int n ) {
    queue<Node*> q ;
    Node* root = new Node(arr[0]) ;
    q.push( root ) ;

    int i = 1 ;
    int j = 2 ;

    while( q.size() > 0 && i < n ){
        Node* temp = q.front() ;
        q.pop() ;

        Node* l ;
        Node* r ;

        if( arr[i]!= INT_MIN ) l = new Node(arr[i]) ;
        else l = nullptr ;

        if( arr[j]!= INT_MIN ) r = new Node(arr[j]) ;
        else r = nullptr ;

        temp->left = l ;
        temp->right = r ;

        if( l ) q.push( l ) ;
        if( r ) q.push( r ) ;

        i+=2 ;
        j+=2 ;

    }

    return root ;

}

void leftBoundary( Node* root ){
    if ( !root ) return ;
    if( root->left == NULL && root->right == NULL ) return ;
    cout << root->data << " " ;
    
    leftBoundary( root->left ) ;
    if( !root->left ) leftBoundary( root->right ) ;

}

void rightBoundary( Node* root ){
    if( !root ) return ;
    if( root->left == NULL && root->right == NULL ) return ;
    
    rightBoundary( root->right ) ;
    if( !root->right ) rightBoundary( root->left ) ;
    cout << root->data << " " ;
    
}

void bottomBoundary( Node* root ){
    if ( !root ) return ;
    if( root->left == NULL && root->right == NULL ) return ;
    cout << root->data << " " ;
    
    bottomBoundary( root->left ) ;
    bottomBoundary( root->right ) ;
}

void boundaryTraversal( Node* root){
    leftBoundary( root ) ;
    bottomBoundary( root ) ;
    rightBoundary( root->right ) ;
}

int main() {
    int n ;
    cin >> n ;
    vector<int> arr(n) ;
    cout << "Enter the elements of the binary tree : ";
    for( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i] ;
    }

    Node* root = constructBFS( arr.data(), n ) ;
    cout << "Boundary Traversal of the binary tree is : " ;
    boundaryTraversal( root ) ;

}