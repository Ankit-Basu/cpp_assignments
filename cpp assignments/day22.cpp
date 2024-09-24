//Question 1
#include <iostream>
using namespace std;

class Stack {
    int top;
    int capacity;
    int* stack;

public:
    Stack(int size) {
        capacity = size;
        stack = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] stack;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        stack[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return -1; // Return -1 or some error code
        }
        return stack[top--];
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // Return -1 or some error code
        }
        return stack[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    Stack s(size);

    int choice, value;
    do {
        cout << "1. Push\n2. Pop\n3. Peek\n4. Check if empty\n5. Check if full\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                value = s.pop();
                if (value != -1) cout << "Popped: " << value << endl;
                break;
            case 3:
                value = s.peek();
                if (value != -1) cout << "Top element: " << value << endl;
                break;
            case 4:
                cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
                break;
            case 5:
                cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 6);

    return 0;
}



//Question 2
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    stack<int> s;
    int value;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        s.push(value);
    }

    cout << "Output: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
        if (!s.empty()) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
