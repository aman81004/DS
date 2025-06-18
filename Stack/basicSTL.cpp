#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;

    // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Displaying the top element
    cout << "Top element: " << s.top() << endl;

    // Popping elements from the stack
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    // Checking if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Displaying the size of the stack
    cout << "Size of stack: " << s.size() << endl;

    // Displaying all elements in the stack
    cout << "Elements in stack: ";
    stack<int> temp = s; // Create a temporary stack to display elements
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Displaying the stack with using another stack
    cout << "Elements in stack (using another stack): ";
    stack<int> st;
    while (!s.empty()) {
        st.push(s.top());
        s.pop();
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}