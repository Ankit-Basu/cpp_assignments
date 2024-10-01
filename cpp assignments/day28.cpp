#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    int year;
    float fuel;

public:
    Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {}

    void refuel(float amount) {
        fuel += amount;
    }

    virtual void display() {
        cout << "Make: " << make << ", Year: " << year << ", Fuel: " << fuel << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;

public:
    Car(string m, int y, float f, int d) : Vehicle(m, y, f), doors(d) {}

    void display() override {
        cout << "Car - Make: " << make << ", Year: " << year << ", Fuel: " << fuel << ", Doors: " << doors << endl;
    }

    void openDoors() {
        cout << "Doors are opened." << endl;
    }
};

class Bike : public Vehicle {
private:
    bool hasCarrier;

public:
    Bike(string m, int y, float f, bool carrier) : Vehicle(m, y, f), hasCarrier(carrier) {}

    void display() override {
        cout << "Bike - Make: " << make << ", Year: " << year << ", Fuel: " << fuel << ", Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }

    void kickStart() {
        cout << "Bike kick-started." << endl;
    }
};

int main() {
    Car car("Toyota", 2020, 15.0, 4);
    Bike bike("Yamaha", 2019, 5.0, true);

    car.refuel(10);
    bike.refuel(3);

    car.display();
    car.openDoors();

    bike.display();
    bike.kickStart();

    return 0;
}
