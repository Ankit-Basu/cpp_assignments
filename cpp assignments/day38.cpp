#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
    double perimeter() override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
    double perimeter() override {
        return 2 * (width + height);
    }
};

int main() {
    double radius, width, height;
    cout << "Enter radius of circle: ";
    cin >> radius;
    Shape* circle = new Circle(radius);

    cout << "Enter width and height of rectangle: ";
    cin >> width >> height;
    Shape* rectangle = new Rectangle(width, height);

    cout << "Circle area: " << circle->area() << endl;
    cout << "Circle perimeter: " << circle->perimeter() << endl;
    
    cout << "Rectangle area: " << rectangle->area() << endl;
    cout << "Rectangle perimeter: " << rectangle->perimeter() << endl;

    delete circle;
    delete rectangle;
    return 0;
}
