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
class DoublyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    DoublyLinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void insertAtPosition(int val, int pos) {
        if (pos < 0 || pos > size) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 0) {
            insertAtBeginning(val);
            return;
        }
        if (pos == size) {
            insertAtEnd(val);
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


    void deleteAtBeginning() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // If the list becomes empty
        }
        delete temp;
        size--;
    }

    void deleteAtEnd() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL; // If the list becomes empty
        }
        delete temp;
        size--;
    }

    void deleteAtPosition(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 0) {
            deleteAtBeginning();
            return;
        }
        if (pos == size - 1) {
            deleteAtEnd();
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
        }
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        delete temp;
        size--;
    }

    void getIndex(int val) {
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

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverseDisplay() {
        Node* temp = tail;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main() {
    DoublyLinkedList dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtBeginning(5);
    dll.insertAtPosition(15, 2);
    
    cout << "List after insertions: ";
    dll.display();
    
    dll.deleteAtBeginning();
    cout << "List after deleting at beginning: ";
    dll.display();
    
    dll.deleteAtEnd();
    cout << "List after deleting at end: ";
    dll.display();
    
    dll.deleteAtPosition(1);
    cout << "List after deleting at position 1: ";
    dll.display();
    
    cout << "Reverse display: ";
    dll.reverseDisplay();

    return 0;
}