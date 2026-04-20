#include <iostream>
using namespace std;

int main() {
    string name;
    int num, sum = 0, digit;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "\n" << name << endl;
    cout << "Sum of digits = " << sum;

    return 0;
}