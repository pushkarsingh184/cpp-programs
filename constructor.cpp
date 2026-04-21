#include <iostream>
using namespace std;

class A {
public:
    int x;

    A() {
        x = 10;
    }

    A(int a) {
        x = a;
    }

    A(A &obj) {
        x = obj.x;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    A a;
    A b(20);
    A c(b);

    cout << "\n" << name << endl;
    a.show();
    b.show();
    c.show();

    return 0;
}