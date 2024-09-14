//Question 1

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertInSortedOrder(Node*& head, int val) {
    Node* newNode = new Node(val);

    // If the list is empty or the value should be inserted at the head
    if (head == nullptr || head->data >= val) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data < val) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, value, insertValueInput;

    cout << "Enter the number of elements in the sorted linked list: ";
    cin >> n;

    cout << "Enter the elements of the sorted linked list: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertInSortedOrder(head, val);  
    }

    cout << "Enter the value to insert: ";
    cin >> insertValueInput;

    insertInSortedOrder(head, insertValueInput);

    cout << "Updated linked list: ";
    printList(head);

    return 0;
}
