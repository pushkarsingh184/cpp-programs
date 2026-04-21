#include <iostream>
using namespace std;

class A {
public:
    int x;

    A(int a) {
        x = a;
    }

    A operator + (A o) {
        return A(x + o.x);
    }
};

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    A a1(5), a2(10);
    A a3 = a1 + a2;

    cout << "\n" << name << endl;
    cout << a3.x << endl;
    cout << add(2, 3) << endl;
    cout << add(2.5, 3.5);

    return 0;
}