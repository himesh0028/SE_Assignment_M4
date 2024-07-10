/*2. Define a class to represent a bank account. Include the
following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include <iostream>
using namespace std;

class Bankaccount {
private:
    int ac_no, balance;
    char Acctype[20], name[30];

public:
    // Function to assign values to the bank account
    void get_Bank() {
        cout << "\n\n\tEnter account number: ";
        cin >> ac_no;

        cout << "\n\n\tEnter depositor name: ";
        cin.ignore(); // To ignore the newline character left by previous input
        cin.getline(name, 30);

        cout << "\n\n\tEnter account type: ";
        cin.getline(Acctype, 20);

        cout << "\n\n\tEnter account balance: ";
        cin >> balance;
    }

    // Function to deposit an amount
    void deposit() {
        int amount;
        cout << "\n\n\tEnter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "\n\n\tBalance after depositing amount: " << balance << endl;
        } else {
            cout << "\n\n\tDeposit amount must be positive." << endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw() {
        int amount;
        cout << "\n\n\tEnter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\n\n\tBalance after withdrawing amount: " << balance << endl;
        } else if (amount > balance) {
            cout << "\n\n\tInsufficient balance." << endl;
        } else {
            cout << "\n\n\tWithdrawal amount must be positive." << endl;
        }
    }

    // Function to display name and balance
    void display() {
        cout << "\n\n\tName: " << name << endl;
        cout << "\n\n\tBalance: " << balance << endl;
    }
};

int main() {
    Bankaccount account;
    account.get_Bank();
    account.deposit();
    account.withdraw();
    account.display();

    return 0;
}

