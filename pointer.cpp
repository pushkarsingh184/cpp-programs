#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void show() {
        cout << marks << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    Student s;
    Student *p = &s;

    p->marks = 90;

    cout << "\n" << name << endl;
    p->show();

    return 0;
}