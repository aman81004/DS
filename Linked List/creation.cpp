#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node a(10); 
    Node b(20);
    Node c(30);
    Node d(40);

    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    Node* head=&a;
    display(head);
    Node e(50);
    d.next=&e;
    display(head);
    e.next=NULL; // Optional, as it is already NULL
    display(head);
    return 0;
}