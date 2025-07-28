#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> q;
    int n, element;

    cout << "Enter the number of elements to be added to the queue: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> element;
        q.push(element);
    }

    cout << "The front element of the queue is: " << q.front() << endl;
    cout << "The size of the queue is: " << q.size() << endl;

    cout << "Queue elements are: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}