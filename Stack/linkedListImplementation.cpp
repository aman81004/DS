#include<iostream>
using namespace std;

// Stack implementation using a linked list
class Node {
    public:
    int data; // Data part of the node
    Node* next; // Pointer to the next node

    Node(int val) { // Constructor to initialize the node
        data = val; // Set the data
        next = nullptr; // Initialize next pointer to null
    }
};

class Stack{
    Node* top; // Pointer to the top node of the stack
    int size;

    public:
    Stack(){
        top = NULL;
        size = 0; 
    }

    // Push
    void push(int val){
        Node* newNode = new Node(val); // Create a new node with the given value
        if(top == NULL){ // If the stack is empty
            top = newNode; // Set the new node as the top of the stack
        } else {
            newNode->next = top; // Link the new node to the current top
            top = newNode; // Update the top to the new node
        }
    }

    // Pop
    void pop(){
        if(top == NULL){ // If the stack is empty
            cout << "Stack Underflow" << endl; // Print underflow message
            return; // Exit the function
        }
        top = top->next; // Move the top pointer to the next node
        size--; // Decrease the size of the stack
    }

    // Peek
    int peek(){
        if(top == NULL){ // If the stack is empty
            cout << "Stack is empty" << endl; // Print empty message
            return -1; // Return -1 to indicate empty stack
        }
        return top->data; // Return the data of the top node
    }

    // IsEmpty
    bool isEmpty(){
        return top == NULL; // Return true if the stack is empty
    }

    // Size
    int getSize(){
        return size; // Return the current size of the stack
    }

    // Display
    void display(){
        Node* current = top; // Start from the top node
        while(current != NULL){ // Traverse the stack
            cout << current->data << " "; // Print the data of each node
            current = current->next; // Move to the next node
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

    s.pop(); // Pop an element from the stack
    cout << "Stack after pop: ";
    s.display(); // Display stack after popping an element

    return 0; // Exit the program
}