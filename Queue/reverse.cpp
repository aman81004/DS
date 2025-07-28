#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    // Transfer elements from queue to stack
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    // Transfer elements back from stack to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    reverseQueue(q);
    // The queue is now reversed
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}