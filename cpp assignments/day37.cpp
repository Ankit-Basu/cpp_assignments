#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int speed;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y), speed(0) {}

    string getBrand() {
        return brand;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    int getSpeed() {
        return speed;
    }

    void setSpeed(int s) {
        speed = s;
    }

    void increaseSpeed(int amount) {
        speed += amount;
    }

    void decreaseSpeed(int amount) {
        speed -= amount;
        if (speed < 0)
            speed = 0;
    }
};

int main() {
    string brand, model;
    int year, amount;

    cout << "Enter car brand: ";
    cin >> brand;
    cout << "Enter car model: ";
    cin >> model;
    cout << "Enter car year: ";
    cin >> year;

    Car car(brand, model, year);

    cout << "Initial speed: " << car.getSpeed() << endl;
    cout << "Enter amount to increase speed: ";
    cin >> amount;
    car.increaseSpeed(amount);
    cout << "Speed after increase: " << car.getSpeed() << endl;

    cout << "Enter amount to decrease speed: ";
    cin >> amount;
    car.decreaseSpeed(amount);
    cout << "Speed after decrease: " << car.getSpeed() << endl;

    return 0;
}
