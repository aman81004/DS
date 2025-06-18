#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseDisplay(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtBeginning(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtEnd(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node*& head, Node*& tail, int val, int pos) {
    if (pos < 0) {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 0) {
        insertAtBeginning(head, tail, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    } else {
        tail = newNode; // Update tail if inserting at the end
    }
    temp->next = newNode;
}

void deleteAtBeginning(Node*& head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete temp;
}

void deleteAtEnd(Node*& tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    if (tail != NULL) {
        tail->next = NULL;
    }
    delete temp;
}

void deleteAtPosition(Node*& head, Node*& tail, int pos) {
    if (pos < 0 || head == NULL) {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 0) {
        deleteAtBeginning(head);
        return;
    }
    Node* temp = head;
    for (int i = 0; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next; // Update head if deleting the first node
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    } else {
        tail = temp->prev; // Update tail if deleting the last node
    }
    delete temp;
}

void getIndex(Node* head, int val) {
    Node* temp = head;
    int index = 0;
    while (temp != NULL) {
        if (temp->val == val) {
            cout << "Value " << val << " found at index: " << index << endl;
            return;
        }
        temp = temp->next;
        index++;
    }
    cout << "Value " << val << " not found in the list." << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtBeginning(head, tail, 5);
    insertAtPosition(head, tail, 15, 2);

    cout << "List after insertions: ";
    display(head);

    deleteAtBeginning(head);
    cout << "List after deleting at beginning: ";
    display(head);

    deleteAtEnd(tail);
    cout << "List after deleting at end: ";
    display(head);

    deleteAtPosition(head, tail, 1);
    cout << "List after deleting at position 1: ";
    display(head);

    cout << "Reversed list: ";
    reverseDisplay(tail);

    return 0;
}