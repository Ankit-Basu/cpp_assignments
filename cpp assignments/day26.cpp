//Question 1
#include <iostream>
using namespace std;

class PriorityQueue {
    int* arr;
    int size;
    int capacity;

public:
    PriorityQueue(int cap) : capacity(cap), size(0) {
        arr = new int[capacity];
    }

    void insert(int element) {
        if (size < capacity) arr[size++] = element;
    }

    int remove() {
        if (size == 0) return -1;
        int maxIndex = 0;
        for (int i = 1; i < size; i++) if (arr[i] > arr[maxIndex]) maxIndex = i;
        int removed = arr[maxIndex];
        arr[maxIndex] = arr[--size];
        return removed;
    }

    int peek() {
        if (size == 0) return -1;
        int maxIndex = 0;
        for (int i = 1; i < size; i++) if (arr[i] > arr[maxIndex]) maxIndex = i;
        return arr[maxIndex];
    }

    bool isEmpty() {
        return size == 0;
    }

    ~PriorityQueue() {
        delete[] arr;
    }
};

int main() {
    int capacity;
    cout << "Enter capacity: ";
    cin >> capacity;
    PriorityQueue pq(capacity);
    int choice, value;

    do {
        cout << "1. Insert\n2. Remove\n3. Peek\n4. Check if empty\n5. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: cout << "Value: "; cin >> value; pq.insert(value); break;
            case 2: cout << "Removed: " << pq.remove() << endl; break;
            case 3: cout << "Highest: " << pq.peek() << endl; break;
            case 4: cout << (pq.isEmpty() ? "Empty" : "Not empty") << endl; break;
        }
    } while (choice != 5);

    return 0;
}
