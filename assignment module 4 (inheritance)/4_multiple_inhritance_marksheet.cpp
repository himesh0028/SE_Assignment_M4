/*4. Write a C++ Program display Student Mark sheet using Multiple
inheritance*/
#include <iostream>
using namespace std;

class Student {
protected:
    string s_name;
    int s_roll, s_age;

public:
    void get_student() {
        cout << "\n\t Enter Student Name: ";
        cin >> s_name;
        cout << "\n\t Enter Student Roll No: ";
        cin >> s_roll;
        cout << "\n\t Enter Student Age: ";
        cin >> s_age;
    }
};

class Marks {
protected:
    int s1, s2, s3, s4, s5;

public:
    void get_mark() {
        cout << "\n\t Maths: ";
        cin >> s1;
        cout << "\n\t Science: ";
        cin >> s2;
        cout << "\n\t Gujarati: ";
        cin >> s3;
        cout << "\n\t Hindi: ";
        cin >> s4;
        cout << "\n\t EVS: ";
        cin >> s5;
    }
};

class Result : public Student, public Marks {
private:
    int t_mark;
    float per;
    string grade;

public:
    void calculate() {
        t_mark = s1 + s2 + s3 + s4 + s5;
        per = static_cast<float>(t_mark) / 5.0;
        if (per >= 70)
            grade = "A+";
        else if (per >= 60)
            grade = "A";
        else if (per >= 50)
            grade = "B";
        else if (per >= 40)
            grade = "C";
        else
            grade = "F";
    }

    void print_data() {
        cout << "\n\t Student Name: " << s_name;
        cout << "\n\t Student Roll No: " << s_roll;
        cout << "\n\t Student Age: " << s_age;
        cout << "\n\t Maths: " << s1;
        cout << "\n\t Science: " << s2;
        cout << "\n\t Gujarati: " << s3;
        cout << "\n\t Hindi: " << s4;
        cout << "\n\t EVS: " << s5;
        cout << "\n\t Total Marks: " << t_mark;
        cout << "\n\t Percentage: " << per;
        cout << "\n\t Grade: " << grade;
    }
};

int main() {
    Result r;
    r.get_student();
    r.get_mark();
    r.calculate();
    r.print_data();
    return 0;
}

