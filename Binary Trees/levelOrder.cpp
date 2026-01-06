// Level Order Traversal of a Binary Tree
#include <iostream>
#include <queue>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int levelOrder( Node* root ){
    if( root == nullptr ) return 0 ;

    
}