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

class CircularLinkedList {
private:
    Node* tail;

public:
    CircularLinkedList() {
        tail = NULL;
    }

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            tail = newNode;
            tail->next = tail;
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            tail = newNode;
            tail->next = tail;
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Insert at position
    void insertAtPosition(int val, int position) {
        if (position < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node(val);
        if (tail == NULL) {
            if (position == 0) {
                tail = newNode;
                tail->next = tail;
            } else {
                cout << "Position out of bounds" << endl;
            }
            return;
        }

        Node* curr = tail->next;
        if (position == 0) {
            newNode->next = curr;
            tail->next = newNode;
            return;
        }

        for (int i = 0; i < position - 1; i++) {
            curr = curr->next;
            if (curr == tail->next) {
                cout << "Position out of bounds" << endl;
                delete newNode;
                return;
            }
        }

        newNode->next = curr->next;
        curr->next = newNode;

        if (curr == tail) {
            tail = newNode; // Update tail if inserted at end
        }
    }

    // Delete at beginning
    void deleteAtBeginning() {
        if (tail == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = tail->next;
        if (tail == temp) {
            delete temp;
            tail = NULL;
        } else {
            tail->next = temp->next;
            delete temp;
        }
    }

    // Delete at end
    void deleteAtEnd() {
        if (tail == NULL) {
            cout << "List is empty" << endl;
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

    // Delete at position
    void deleteAtPosition(int position) {
        if (tail == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* curr = tail->next;
        if (position == 0) {
            deleteAtBeginning();
            return;
        }

        for (int i = 0; i < position - 1; i++) {
            if (curr->next == tail->next) {
                cout << "Position out of bounds" << endl;
                return;
            }
            curr = curr->next;
        }

        Node* toDelete = curr->next;
        if (toDelete == tail) {
            deleteAtEnd();
        } else {
            curr->next = toDelete->next;
            delete toDelete;
        }
    }

    // Display / Traverse
    void display() {
        if (tail == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = tail->next;
        do {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtBeginning(10);
    cll.insertAtEnd(20);
    cll.insertAtPosition(15, 1);
    cll.insertAtPosition(5, 0);

    cout << "List after insertions: ";
    cll.display();

    cll.deleteAtBeginning();
    cout << "List after deleting at beginning: ";
    cll.display();

    cll.deleteAtEnd();
    cout << "List after deleting at end: ";
    cll.display();

    cll.deleteAtPosition(1);
    cout << "List after deleting at position 1: ";
    cll.display();

    return 0;
}