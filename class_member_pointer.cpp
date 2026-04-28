#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base Class Function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived Class Function Invoked Through Base Class Pointer" << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    Base *ptr;       
    Derived d;       

    ptr = &d;        

    cout << "\n" << name << endl;
    ptr->display();  

    return 0;
}