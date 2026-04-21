#include <iostream>
using namespace std;

int main() {
    string name;
    int a, b;
    int *sum = new int;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter first value: ";
    cin >> a;

    cout << "Enter second value: ";
    cin >> b;

    *sum = a + b;

    cout << "\n" << name << endl;
    cout << "First Value = " << a << endl;
    cout << "Second Value = " << b << endl;
    cout << "Sum = " << *sum << endl;

    delete sum;

    return 0;
}
