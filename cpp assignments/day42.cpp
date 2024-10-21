#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFundsException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient funds for this withdrawal.";
    }
};

class InvalidAmountException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Invalid amount entered for withdrawal.";
    }
};

class BankAccount {
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void withdraw(double amount) {
        if (amount < 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);

    try {
        account.withdraw(1200);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    try {
        account.withdraw(-100);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
