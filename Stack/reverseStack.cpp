#include<iostream>
#include<stack>
using namespace std;

void reverseStack(stack<int>& s) {
    stack<int> a;
    stack<int> b;
    while(s.size() >0){
        a.push(s.top());
        s.pop();
    }
    while(a.size() > 0){
        b.push(a.top());
        a.pop();
    }
    while(b.size() > 0){
        s.push(b.top());
        b.pop();
    }
    // The stack 's' is now reversed
    // Note: The original stack 's' is modified in place
}

// Reverse using recursion
void reverseStackRec(stack<int>& s) {
    if (s.empty()) return; // Base case: if stack is empty, return
    int top = s.top(); // Get the top element
    s.pop(); // Remove the top element
    reverseStackRec(s); // Recursively reverse the remaining stack
    s.push(top); // Push the top element back onto the reversed stack
}

// Reverse using an array
void reverseStackArray(stack<int>& s) {
    int arr[1000]; // Assuming a maximum size of 1000 for simplicity
    int i = 0;
    while (!s.empty()) {
        arr[i++] = s.top(); // Store elements in array
        s.pop();
    }
    for (int j = i - 1; j >= 0; j--) {
        s.push(arr[j]); // Push elements back in reversed order
    }
}                            

void displayStack(const stack<int>& s) {
    stack<int> temp = s; // Create a copy to display
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Original stack: ";
    displayStack(s);
    reverseStack(s);
    cout << "Reversed stack: ";
    displayStack(s);
    return 0;
}