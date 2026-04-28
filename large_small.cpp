#include <iostream>
using namespace std;

template <class T>
T largest(T a[], int n) {
    T max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

template <class T>
T smallest(T a[], int n) {
    T min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

template <class T>
void sortList(T a[], int n) {
    T temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

template <class T>
void display(T a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    string name;
    int n;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n" << name << endl;

    cout << "Largest Number = " << largest(a, n) << endl;
    cout << "Smallest Number = " << smallest(a, n) << endl;

    sortList(a, n);

    cout << "Numbers in Ascending Order:\n";
    display(a, n);

    return 0;
}