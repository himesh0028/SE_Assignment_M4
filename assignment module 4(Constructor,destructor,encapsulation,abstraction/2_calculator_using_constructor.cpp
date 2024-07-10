/*2. Write a program of Addition, Subtraction, Division,
Multiplication usingconstructor.*/
#include <iostream>
using namespace std;

class Calculator {
private:
    int n1, n2;

public:
    // Constructor to initialize numbers
    Calculator(int a, int b) {
        n1 = a;
        n2 = b;
    }

    // Member function to add numbers
    int add() {
        return n1 + n2;
    }

    // Member function to subtract numbers
    int subtract() {
        return n1 - n2;
    }

    // Member function to multiply numbers
    int multiply() {
        return n1 * n2;
    }

    // Member function to divide numbers
    int divide() {
        if (n2 != 0) {
            return n1 / n2;
        } else {
            cout << "\n\n\t Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    int a, b;

    cout << "\n\n\t Enter first number: ";
    cin >> a;
    cout << "\n\n\t Enter second number: ";
    cin >> b;

    Calculator calc(a, b);

    cout << "\n Addition: " << calc.add() << endl;
    cout << "\n Subtraction: " << calc.subtract() << endl;
    cout << "\n Multiplication: " << calc.multiply() << endl;
    cout << "\n Division: " << calc.divide() << endl;

    return 0;
}

