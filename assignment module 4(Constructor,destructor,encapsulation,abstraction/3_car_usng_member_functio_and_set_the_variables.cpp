/*3. Write a C++ program to create a class called Car that has
private member variables for company, model, and year.
Implement memberfunctions to get and set these variables
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Member function to get car details from the user
    void getCarDetails() {
        cout << "\n\n\t Enter company: ";
        getline(cin, company);
        cout << "\n\n\t Enter model: ";
        getline(cin, model);
        cout << "\n\n\t Enter year: ";
        cin >> year;
        cin.ignore(); // To clear the newline character from the input buffer
    }

    // Getter functions
    string getCompany() const {
        return company;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Function to display car details
    void display() const {
        cout << "\n\n\n\t Company: " << company;
        cout << "\n\n\n\t Model: " << model;
        cout << "\n\n\n\t Year: " << year << endl;
    }
};

int main() {
    Car car;

    // Get car details from user
    car.getCarDetails();

    // Display car details
    car.display();

    return 0;
}

