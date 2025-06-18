#include<iostream>
#include<stack> 
using namespace std;

void pushAtBottom(stack<int>& s, int x) {
    if (s.empty()) {
        s.push(x); // If stack is empty, push the element
        return;
    }
    
    int top = s.top(); // Get the top element
    s.pop(); // Remove the top element
    pushAtBottom(s, x); // Recursively call to push at bottom
    s.push(top); // Push the top element back on top
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
    
    cout << "Original Stack: ";
    displayStack(s);
    
    int x = 0; // Element to push at bottom
    pushAtBottom(s, x);
    
    cout << "Stack after pushing " << x << " at bottom: ";
    displayStack(s);
    
    return 0;
}