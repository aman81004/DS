// Double Ended Queue Implementation

#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque{
    public:
    Node* front;
    Node* rear;
    int size;

    Deque() {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void pushBack(int val) {
        Node* newNode = new Node(val);
        if(size==0) front = rear = newNode;
        else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        size++;
    }

    void pushFront(int val) {
        Node* newNode = new Node(val);
        if(size==0) front = rear = newNode;
        else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        size++;
    }

    void popFront() {
        if(size == 0){
            cout<< "Deque is empty!"<<endl;
            return;
        }
        front = front->next;
        if(front != NULL) front->prev = NULL;
        if(front == NULL) rear = NULL; 
        size--;
    }

    void popBack() {
        if(size == 0){
            cout<< "Deque is empty!"<<endl;
            return;
        }
        else if(size == 1) {
            popFront();
            return;
        }
        Node* temp = rear->prev;
        temp->next = NULL;
        rear = temp;
        size--;
    }


    int getFront() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
        return front->val;
    }

    int getBack() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
        return rear->val;
    }

    int sizeOfDeque() {
        return size;
    }

    bool isEmpty() {
        if(size == 0) {
            cout << "Deque is empty!" << endl;
            return true;
        }
        cout << "Deque is not empty!" << endl;
        return false;
    }

    void display() {
        if(size == 0) {
            cout << "Deque is empty!" << endl;
            return;
        }
        Node* current = front;
        while(current != NULL) {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.display(); // Output: 5 10 20

    cout << "Front: " << dq.getFront() << endl; // Output: Front: 5
    cout << "Back: " << dq.getBack() << endl;   // Output: Back: 20
    cout << "Size: " << dq.sizeOfDeque() << endl; // Output: Size: 3

    dq.popFront();
    dq.display(); // Output: 10 20

    dq.popBack();
    dq.display(); // Output: 10

    return 0;
}