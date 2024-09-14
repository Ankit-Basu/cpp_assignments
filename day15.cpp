//Question 1 
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string rollNo;

public:
    Student(string n, int a, string r) {
        name = n;
        age = a;
        rollNo = r;
    }

    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollNo << endl;
    }
};

int main() {
    string name, rollNo;
    int age;

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter student's roll number: ";
    getline(cin, rollNo);

    Student student1(name, age, rollNo);

    student1.displayDetails();

    return 0;
}


//Question 2
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

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteValue(Node*& head, int val) {
    if (head == nullptr) return;

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next != nullptr) {
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }
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
    int n, value, deleteValueInput;

    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertAtEnd(head, val);
    }

    cout << "Enter the value to delete: ";
    cin >> deleteValueInput;

    deleteValue(head, deleteValueInput);

    cout << "Updated linked list: ";
    printList(head);

    return 0;
}
