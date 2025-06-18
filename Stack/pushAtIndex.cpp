#include<iostream>
#include<stack>
using namespace std;

void pushAtIndex(stack<int>& s, int x, int index) {
    if (index < 0 || index > s.size()) {
        cout << "Invalid index" << endl;
        return;
    }
    
    stack<int> temp;
    
    // Pop elements until we reach the desired index
    for (int i = 0; i < index; i++) {
        if (!s.empty()) {
            temp.push(s.top());
            s.pop();
        }
    }
    
    // Push the new element at the specified index
    s.push(x);
    
    // Push back the elements from the temporary stack
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
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

    cout << "Original Stack: ";
    displayStack(s);

    int x = 10; // Element to push
    int index = 2; // Index at which to push the element
    pushAtIndex(s, x, index);

    cout << "Stack after pushing " << x << " at index " << index << ": ";
    displayStack(s);

    return 0;
}