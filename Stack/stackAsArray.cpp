#include<iostream>
using namespace std;
// Stack implementation using an array
#define MAX 100 // Maximum size of the stack
class Stack {
    int arr[MAX]; // Array to store stack elements
    int top; // Index of the top element in the stack
    public:
    Stack() { // Constructor to initialize the stack
        top = -1; // Stack is initially empty
    }
    // Function to add an item to the stack
    void push(int val) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl; // Check for stack overflow
            return;
        }
        arr[++top] = val; // Increment top and add the value
    }
    // Function to remove an item from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl; // Check for stack underflow
            return -1; // Return -1 if stack is empty
        }
        return arr[top--]; // Return the top value and decrement top
    }

    // Function to get the top item of the stack
    int peek() {    
        if (top < 0) {
            cout << "Stack is empty" << endl; // Check if stack is empty
            return -1; // Return -1 if stack is empty
        }
        return arr[top]; // Return the top value without removing it
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top < 0; // Return true if top is less than 0
    }

    // Function to get the current size of the stack
    int size(){
        return top + 1; // Return the number of elements in the stack
    }

    // Function to display the stack elements
    void display() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " "; // Print each element in the stack
        }  
        cout << endl; // New line after displaying all elements
    }
};

int main() {
    Stack s; // Create a stack object
    s.push(10); // Push elements onto the stack
    s.push(20);
    s.push(30);
    
    cout << "Stack elements: ";
    s.display(); // Display stack elements

    cout << "Top element is: " << s.peek() << endl; // Peek at the top element

    cout << "Popped element: " << s.pop() << endl; // Pop an element from the stack
    cout << "Stack after pop: ";
    s.display(); // Display stack after popping

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // Check if stack is empty
    cout << "Current size of stack: " << s.size() << endl; // Get current size of the stack

    return 0; // End of program
}