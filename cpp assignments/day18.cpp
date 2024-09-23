#include <iostream>
#include <tuple>
#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    Person(std::string fName, std::string lName, int a)
        : firstName(fName), lastName(lName), age(a) {}

    std::string getFullName() {
        return firstName + " " + lastName;
    }

    std::tuple<std::string, std::string, int> getDetails() {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
    std::string fName, lName;
    int age;

    std::cout << "Enter first name: ";
    std::cin >> fName;
    std::cout << "Enter last name: ";
    std::cin >> lName;
    std::cout << "Enter age: ";
    std::cin >> age;

    Person person(fName, lName, age);

    std::cout << "Full Name: " << person.getFullName() << std::endl;

    auto [first, last, personAge] = person.getDetails();
    
    std::cout << "First Name: " << first << "\nLast Name: " << last << "\nAge: " << personAge << std::endl;

    return 0;
}
