#include<iostream>
#include<queue>
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
    int arr[] = {1, 2, 3, 4, 5, -1, 6} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;

    Node* root =  constructBFS(arr, n) ;

    levelOrder(root) ;

    return 0;
}