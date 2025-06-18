#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Insertion at beginning
void insertAtBeginning(Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        newNode->next = newNode;
        tail = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
    }
}

// Insertion at end
void insertAtEnd(Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        newNode->next = newNode;
        tail = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

// Insertion at position
void insertAtPosition(Node* &tail, int val, int pos) {
    if (pos < 0) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(val);
    if (tail == NULL) {
        if (pos == 0) {
            newNode->next = newNode;
            tail = newNode;
        } else {
            cout << "Position out of bounds\n";
            delete newNode;
        }
        return;
    }

    Node* curr = tail->next;
    if (pos == 0) {
        newNode->next = curr;
        tail->next = newNode;
        return;
    }

    for (int i = 0; i < pos - 1; i++) {
        if (curr->next == tail->next) {
            cout << "Position out of bounds\n";
            delete newNode;
            return;
        }
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;

    if (curr == tail) {
        tail = newNode; // Update tail if inserted at end
    }
}

// Deletion at beginning
void deleteAtBeginning(Node* &tail) {
    if (tail == NULL) {
        cout << "List is empty\n";
        return;
    }
    Node* head = tail->next;
    if (head == tail) {
        delete head;
        tail = NULL;
    } else {
        tail->next = head->next;
        delete head;
    }
}

// Deletion at end
void deleteAtEnd(Node* &tail) {
    if (tail == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* curr = tail->next;
    if (curr == tail) {
        delete tail;
        tail = NULL;
    } else {
        while (curr->next != tail) {
            curr = curr->next;
        }
        curr->next = tail->next;
        delete tail;
        tail = curr;
    }
}

// Deletion at position
void deleteAtPosition(Node* &tail, int pos) {
    if (tail == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* curr = tail->next;
    if (pos == 0) {
        deleteAtBeginning(tail);
        return;
    }

    for (int i = 0; i < pos - 1; i++) {
        if (curr->next == tail->next) {
            cout << "Position out of bounds\n";
            return;
        }
        curr = curr->next;
    }

    Node* toDelete = curr->next;
    if (toDelete == tail) {
        deleteAtEnd(tail);
    } else {
        curr->next = toDelete->next;
        delete toDelete;
    }
}

// Display / Traversal
void display(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = tail->next;
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

int main() {
    Node* tail = NULL;

    insertAtBeginning(tail, 10);
    insertAtEnd(tail, 20);
    insertAtPosition(tail, 15, 1);
    display(tail);

    deleteAtBeginning(tail);
    display(tail);

    deleteAtEnd(tail);
    display(tail);

    deleteAtPosition(tail, 0);
    display(tail);

    return 0;
}