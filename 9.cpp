#include<bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    void setAccountDetails(string name, int accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    string getAccountHolderName() {
        return accountHolderName;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
};

int main() {
    BankAccount account1;

    account1.setAccountDetails("Prajwal Chobitkar", 123456, 5000.0);

    cout << "Account Holder: " << account1.getAccountHolderName() << endl;
    cout << "Account Number: " << account1.getAccountNumber() << endl;
    cout << "Initial Balance: " << account1.getBalance() << endl;

    account1.deposit(2000.0);
    cout << "Updated Balance: " << account1.getBalance() << endl;

    account1.withdraw(1500.0);
    cout << "Updated Balance: " << account1.getBalance() << endl;

    return 0;
}
