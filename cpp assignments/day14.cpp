//Question 1
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string b, string m, string e, int seats) {
        brandName = b;
        model = m;
        engine = e;
        numberOfSeats = seats;
    }

    void displayInfo() {
        cout << "Car Information:" << endl;
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    string brand, model, engine;
    int seats;

    cout << "Enter the brand name: ";
    getline(cin, brand);
    cout << "Enter the model: ";
    getline(cin, model);
    cout << "Enter the engine: ";
    getline(cin, engine);
    cout << "Enter the number of seats: ";
    cin >> seats;

    Car myCar(brand, model, engine, seats);

    myCar.displayInfo();

    return 0;
}


//Question 2
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
    }

    int area() {
        return length * width;
    }

    void displayInfo() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    int l, w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;

    Rectangle rect1(l, w);

    Rectangle rect2 = rect1;

    cout << "\nRectangle 1:" << endl;
    rect1.displayInfo();

    cout << "\nRectangle 2 (Copy of Rectangle 1):" << endl;
    rect2.displayInfo();

    return 0;
}

