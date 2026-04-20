#include <iostream>
using namespace std;

int main() {
    string name;
    int n;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "\n" << name << endl;
    cout << "Prime numbers are:\n";

    for (int i = 2; i <= n; i++) {
        bool prime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << i << " ";
    }

    return 0;
}