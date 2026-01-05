#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reorderQueue(queue<int> &q) {
    if (q.empty()) return;

    int n = q.size();
    int halfSize = n / 2;
    stack<int> s;

    // Step 1: Push first half into stack
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Enqueue back stack elements (reversed first half)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Move first half (which was originally second half) to the back
    for (int i = 0; i < halfSize; i++) {
        q.push(q.front());
        q.pop();
    }

    // Step 4: Again push first half (original first half) into stack
    for (int i = 0; i < halfSize; i++) {
        s.push(q.front());
        q.pop();
    }

    // Step 5: Interleave stack (first half) and queue (second half)
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    for (int i = 1; i <= 10; i++) {
        q.push(i);
    }

    reorderQueue(q);

    cout << "Reordered Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
