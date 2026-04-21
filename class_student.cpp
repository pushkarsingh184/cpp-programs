#include <iostream>
using namespace std;

class Student {
public:
    string StudentName;
    int Marks1, Marks2, Total, MaxMarks;
    float Avg;

    void assign(string name, int m1, int m2, int max) {
        StudentName = name;
        Marks1 = m1;
        Marks2 = m2;
        MaxMarks = max;
        compute();
    }

    void compute() {
        Total = Marks1 + Marks2;
        Avg = Total / 2.0;
    }

    void display() {
        cout << "Student Name = " << StudentName << endl;
        cout << "Marks 1 = " << Marks1 << endl;
        cout << "Marks 2 = " << Marks2 << endl;
        cout << "Total = " << Total << endl;
        cout << "Average = " << Avg << endl;
        cout << "Max Marks = " << MaxMarks << endl;
        cout << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "\n" << name << endl;

    Student s1, s2;

    s1.assign("Aman", 80, 85, 100);
    s1.display();

    s2.assign("Birbal", 94, 86, 100);
    s2.display();

    return 0;
}