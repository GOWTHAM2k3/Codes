#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

struct LinkedList {
    static Node* head;
    static void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is empty. Cannot delete from the end." << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
   Node* ptr = head;
        while (ptr->next->next != NULL) {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = NULL;
    }
    static void displayList(Node* node) {
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};

Node* LinkedList::head = NULL;

int main() {
    LinkedList::head = new Node(10);
    LinkedList::head->next = new Node(20);
    LinkedList::head->next->next = new Node(50);
    cout << "Original List:" << endl;
    LinkedList::displayList(LinkedList::head);
    LinkedList::deleteAtEnd();
    cout << "List after deleting at end:" << endl;
    LinkedList::displayList(LinkedList::head);
    return 0;
}
