//Question 1 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev; // Adding prev pointer for doubly linked list

    Node(int val) : data(val), next(nullptr), prev(nullptr) {} // Constructor
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    void insertAtPosition(int p, int x) {
        Node* newNode = new Node(x);
        
        if (p == 0) {
            if (head == nullptr) {
                head = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            return;
        }

        Node* temp = head;
        for (int i = 0; i < p - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) return;

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int n, p, x;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        dll.insertAtPosition(i, value);
    }

    cin >> p >> x;
    dll.insertAtPosition(p, x);

    dll.display();

    return 0;
}



//Question 2
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void createCycle(int pos) {
        if (pos == -1) return;

        Node* temp = head;
        Node* cycleNode = nullptr;
        int index = 0;

        while (temp->next) {
            if (index == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            index++;
        }

        temp->next = cycleNode;
    }

    bool detectCycle() {
        if (!head) return false;

        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    LinkedList ll;
    int n, pos;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        ll.insert(value);
    }

    cin >> pos;
    ll.createCycle(pos);

    if (ll.detectCycle()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

