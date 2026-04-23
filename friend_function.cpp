#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    A() {
        x = 10;
    }

    friend void show(A);
    friend class B;
};

void show(A a) {
    cout << "Friend Function : " << a.x << endl;
}

class B {
public:
    void display(A a) {
        cout << "Friend Class : " << a.x << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    A a;
    B b;

    cout << "\n" << name << endl;
    show(a);
    b.display(a);

    return 0;
}