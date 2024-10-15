//Question 1
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}


//Question 2
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;
    return 0;
}


//Question 3
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;
    return 0;
}



