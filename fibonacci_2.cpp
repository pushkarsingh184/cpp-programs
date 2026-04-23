#include <iostream>
using namespace std;

class Fib {
    int n;

public:
    Fib(int x) {
        n = x;
    }

    void show() {
        int a = 0, b = 1, c;

        for (int i = 0; i < n; i++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    Fib f(10);

    cout << "\n" << name << endl;
    f.show();

    return 0;
}