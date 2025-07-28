//Remove all the elements present at even position of queue.

#include <iostream>
#include <queue>
using namespace std;

void removeEven(queue<int> &q){
    int n = q.size();
    
    for (int i = 0; i < n; i++) {
        if( i%2 == 0) q.pop();
        else{
            int frontElement = q.front();
            q.pop();
            q.push(frontElement);
        }
    }

}

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

    cout << "Original queue elements are: ";
    for (int i = 0; i < n; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Refill the queue with the original elements
    for (int i = 0; i < n; i++) {
        cin >> element;
        q.push(element);
    }

    removeEven(q);

    cout << "Queue after removing elements at even positions: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}