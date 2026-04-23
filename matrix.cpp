#include <iostream>
using namespace std;

class M {
public:
    int a[10][10], r, c;

    void read() {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> a[i][j];
    }

    void print() {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    void add(M m2) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] + m2.a[i][j] << " ";
            cout << endl;
        }
    }

    void sub(M m2) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                cout << a[i][j] - m2.a[i][j] << " ";
            cout << endl;
        }
    }

    void mul(M m2) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < m2.c; j++) {
                int s = 0;
                for (int k = 0; k < c; k++)
                    s = s + a[i][k] * m2.a[k][j];
                cout << s << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    M m1, m2;

    cout << "Enter first matrix (rows cols elements): ";
    m1.read();

    cout << "Enter second matrix (rows cols elements): ";
    m2.read();

    cout << "\n" << name << endl;

    cout << "First Matrix:\n";
    m1.print();

    cout << "Second Matrix:\n";
    m2.print();

    cout << "Addition:\n";
    m1.add(m2);

    cout << "Subtraction:\n";
    m1.sub(m2);

    cout << "Multiplication:\n";
    m1.mul(m2);

    return 0;
}