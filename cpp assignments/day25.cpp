//Question 1
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findSingleNumber(const vector<int>& nums) {
    unordered_map<int, int> countMap;

    for (int num : nums) {
        countMap[num]++;
    }

    for (const auto& entry : countMap) {
        if (entry.second == 1) {
            return entry.first;
        }
    }

    return -1; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = findSingleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}


//Question 2
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; // or any sentinel value
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;
    int n, value;

    cout << "Enter the number of elements to push onto the stack: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        stack.push(value);
    }

    cout << "Stack contents (top to bottom): ";
    while (!stack.isEmpty()) {
        cout << stack.peek() << " ";
        stack.pop();
    }
    cout << endl;

    return 0;
}
