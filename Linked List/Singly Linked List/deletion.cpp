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

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void insertAtBeginning(int val){
        Node* newNode = new Node(val);
        if(size == 0) head = tail = newNode;
        else {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void insertAtPosition(int val, int pos){
        if(pos < 0 || pos > size) {
            cout << "Invalid position" << endl;
            return;
        }
        if(pos == 0) {
            insertAtBeginning(val);
            return;
        }
        if(pos == size) {
            insertAtEnd(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }

    void deleteAtBeginning() {
        if(size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtEnd() {
        if(size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        tail->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtPosition(int pos) {
        if(pos < 0 || pos >= size) {
            cout << "Invalid position" << endl;
            return;
        }
        else if(pos == 0) {
            deleteAtBeginning();
            return;
        }
        else if(pos == size - 1) {
            deleteAtEnd();
            return;
        }
        else{
            Node* temp = head;
            for(int i = 0; i < pos - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display(); // Output: 10 20 30
    ll.insertAtBeginning(5);
    ll.display(); // Output: 5 10 20 30
    ll.insertAtPosition(15, 2);
    ll.display(); // Output: 5 10 15 20 30
    ll.insertAtPosition(25, 4);
    ll.display(); // Output: 5 10 15 20 25 30
    ll.insertAtPosition(35, 6);
    ll.display(); // Output: 5 10 15 20 25 30 35
    return 0;
}