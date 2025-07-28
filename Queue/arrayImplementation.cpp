// Implementaion of a queue using an array in C++
#include <iostream>
using namespace std;
#define MAX 1000 // Maximum size of the queue

class Queue {
    int front, rear;
    int arr[MAX];

    public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0; // Initialize front if queue was empty
        }
        arr[++rear] = value; // Increment rear and add the new element
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1; // Reset queue when last element is dequeued
        } else {
            front++;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Return -1 if queue is empty
        }
        return arr[front];
    }

    int getSize() {
        if (isEmpty()) {
            return 0; // Size is 0 if queue is empty
        }
        return rear - front + 1; // Calculate size based on front and rear indices
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
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

    q.display();

    // Dequeue an element
    q.dequeue();
    cout << "After dequeuing, the front element is: " << q.getFront() << endl;
    cout << "Queue size after dequeue: " << q.getSize() << endl;

    return 0;
}