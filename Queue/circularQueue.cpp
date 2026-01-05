// Circular Queue Implementation

#include<iostream>
#include<vector>
using namespace std;

class CircularQueue {
private:
    vector<int> queue;
    int front;
    int rear;
    int capacity;

public:
    CircularQueue(int size) {
        capacity = size;
        queue.resize(capacity);
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return queue[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return queue[rear];
    }
};

int main(){
    CircularQueue cq(5);

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);
    cq.enqueue(50);
    cq.enqueue(60);  // This should show "Queue is full!"

    cout << "Front element: " << cq.getFront() << endl;
    cout << "Rear element: " << cq.getRear() << endl;

    cq.dequeue();
    cq.dequeue();

    cout << "Front element after dequeuing: " << cq.getFront() << endl;
    cout << "Rear element after dequeuing: " << cq.getRear() << endl;

    return 0;
}