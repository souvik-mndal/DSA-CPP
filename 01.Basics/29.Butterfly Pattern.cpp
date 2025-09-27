// WAP to read a number n and print a symmetric star pattern (hourglass style) of size n.

/*
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the pattern: ";
    cin >> n;

    // Upper half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 0; j < (2 * n) - (2 * i) - 2; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
