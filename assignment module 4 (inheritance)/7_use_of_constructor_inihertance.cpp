/*7. Write a C++ Program to illustrates the use of Constructors
in multilevel inheritance*/
#include <iostream>
using namespace std;

// Base class
class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent constructor called" << endl;
    }
};

// Derived class
class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent constructor called" << endl;
    }
};

// Derived class
class Child : public Parent {
public:
    Child() {
        cout << "Child constructor called" << endl;
    }
};

int main() {
    Child c;
    return 0;
}

