//Question 1
#include <iostream>
using namespace std;

double pow(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    double result = 1;
    while (n) {
        if (n % 2 == 1) result *= x;
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
    double x;
    int n;
    cout << "Enter the amount of energy generated per day (kWh): ";
    cin >> x;
    cout << "Enter the number of days: ";
    cin >> n;
    double totalEnergy = pow(x, n);
    cout << totalEnergy << " kWh" << endl;
    return 0;
}
