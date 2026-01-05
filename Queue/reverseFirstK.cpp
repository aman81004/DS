#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstK(queue<int>& q, int k) {
    if (q.empty() || k > (int)q.size() || k <= 0) return;

    stack<int> s;
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    int n = q.size() - k;
    for (int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
    }
}

void display(queue<int> q) {  
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    for (int i = 1; i <= 7; i++) q.push(i);

    cout << "Original queue: ";
    display(q);

    reverseFirstK(q, 4);

    cout << "After reversing first 4 elements: ";
    display(q);

    return 0;
}
