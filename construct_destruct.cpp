#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Constructor of Base1" << endl;
    }

    ~Base1() {
        cout << "Destructor of Base1" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Constructor of Base2" << endl;
    }

    ~Base2() {
        cout << "Destructor of Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Constructor of Derived" << endl;
    }

    ~Derived() {
        cout << "Destructor of Derived" << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "\n" << name << endl;
    cout << "Creating Object...\n" << endl;

    Derived d;

    cout << "\nObject going out of scope...\n" << endl;

    return 0;
}