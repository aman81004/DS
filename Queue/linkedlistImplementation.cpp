// Linked List Implementation of Queue
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
    Node* front;
    Node* rear;

    public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    bool isFull() {
        return false;
    }

    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr; // If the queue becomes empty
        }

        delete temp;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Return -1 if queue is empty
        }
        return front->data;
    }

    int getSize() {
        int size = 0;
        Node* current = front;
        while (current != nullptr) {
            size++;
            current = current->next;
        }
        return size;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};

int main() {
    Queue q;
    int n, element;

    cout << "Enter the number of elements to be added to the queue: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> element;
        q.enqueue(element);
    }

    cout << "The front element of the queue is: " << q.getFront() << endl;
    cout << "The size of the queue is: " << q.getSize() << endl;

    cout << "Queue elements are: ";
    q.display();

    return 0;
}