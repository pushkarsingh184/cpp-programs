#include <iostream>
using namespace std;

int main() {
    string name;
    int n;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << name << endl;
    cout << "Max " << max << " Min " << min;

    return 0;
}