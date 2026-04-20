#include <iostream>
using namespace std;

int main() {
    string name;
    int n, a = 0, b = 1, c;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "\n" << name << endl;
    cout << "First " << n << " terms of Fibonacci sequence are:\n";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}