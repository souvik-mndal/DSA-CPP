// WAP to read a number n and print a solid diamond pattern of '*' of height 2n-1.

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the diamond (half height): ";
    cin >> n;

    // Upper half (pyramid)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half (inverted pyramid)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 3; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
