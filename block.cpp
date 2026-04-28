#include <iostream>
using namespace std;

int main() {
    string name;
    int a, b, c;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    cout << "\n" << name << endl;

    try {
        if (b == 0)
            throw b;

        c = a / b;
        cout << "Result = " << c << endl;
    }
    catch (int x) {
        cout << "Exception Caught: Division by Zero is not allowed." << endl;
    }

    return 0;
}