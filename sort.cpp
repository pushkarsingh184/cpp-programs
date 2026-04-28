#include <iostream>
using namespace std;

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

    sortList(a, n);

    cout << "\n" << name << endl;
    cout << "Sorted List in Ascending Order:\n";
    display(a, n);

    return 0;
}