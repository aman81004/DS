#include<iostream>
#include<stack>
using namespace std;

void copyStackToAnother(stack<int>& source,stack<int>& destination) {
    stack<int> temp;
    
    // Transfer elements from source to temp
    while (!source.empty()) {
        temp.push(source.top());
        source.pop();
    }
    
    // Transfer elements from temp to destination
    while (!temp.empty()) {
        destination.push(temp.top());
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
    stack<int> source;
    stack<int> destination;

    // Pushing elements onto the source stack
    source.push(1);
    source.push(2);
    source.push(3);
    source.push(4);
    source.push(5);

    cout << "Source Stack: ";
    displayStack(source);

    // Copying elements from source to destination
    copyStackToAnother(source, destination);

    cout << "Destination Stack after copying: ";
    displayStack(destination);

    return 0;
}