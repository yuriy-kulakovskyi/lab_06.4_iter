#include <iostream>
#include <iomanip>
#include "../include/main.h"

using namespace std;

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter a value for a[" << i << "]: ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << setw(4) << a[i];
    }

    cout << endl;

    cout << "The largest absolute value in the array is: " << FindTheLargest(a, n) << endl;

    cout << "The sum between the first two positive numbers is: " << Sum(a, n) << endl;

    Sort(a, n);

    cout << "The modified array is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(4) << a[i];
    }

    return 0;
}