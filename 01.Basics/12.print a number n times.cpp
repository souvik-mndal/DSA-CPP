// WAP to read a number and print it n times.

#include <iostream>
using namespace std;

int main() {
    int num, n;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter how many times to print: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << num;
        if (i != n - 1) {
            cout << " "; // add space between numbers
        }
    }

    cout << endl;
    return 0;
}
