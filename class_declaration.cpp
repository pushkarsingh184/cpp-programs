#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    int marks;

public:
    void getData();
    void displayData(string);
};

void Student::getData() {
    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::displayData(string name) {
    cout << "\n" << name << endl;
    cout << "Roll Number = " << roll << endl;
    cout << "Marks = " << marks << endl;
}

int main() {
    string name;
    Student s;

    cout << "Enter your name: ";
    cin >> name;

    s.getData();       
    s.displayData(name);

    return 0;
}