/*4. Write a C++ program to implement a class called Bank
Account that hasprivate member variables for account number
and balance. Include member functions to deposit and
withdraw money from the account.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    int acc_no;
    double balance;

public:
    // Function to initialize the bank account
    void get_bankaccount() {
        cout << "\n\n\tEnter account number: ";
        cin >> acc_no;
        cout << "\n\n\tEnter account balance: ";
        cin >> balance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\n\n\tDeposited: $" << amount << endl;
        } else {
            cout << "\n\n\tInvalid deposit amount." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\n\n\tWithdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "\n\n\tInsufficient funds." << endl;
        } else {
            cout << "\n\n\tInvalid withdrawal amount." << endl;
        }
    }

    // Function to display the account details
    void display() const {
        cout << "\n\n\tAccount Number: " << acc_no << endl;
        cout << "\tBalance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.get_bankaccount();

    char choice;
    double amount;

    cout << "\n\n\tChoose an option:" << endl;
    cout << "\tD - Deposit" << endl;
    cout << "\tW - Withdraw" << endl;
    cout << "\tEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 'D':
        case 'd':
            cout << "\n\n\tEnter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 'W':
        case 'w':
            cout << "\n\n\tEnter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        default:
            cout << "\n\n\tInvalid choice. Please run the program again." << endl;
            return 1;
    }

    account.display();
    return 0;
}

			
		

