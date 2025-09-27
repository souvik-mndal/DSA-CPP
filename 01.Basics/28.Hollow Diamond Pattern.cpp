// WAP to read a number n and print a hollow diamond pattern of '*' of height 2n-1.

/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the diamond (half height): ";
    cin >> n;

    // Upper half (hollow pyramid)
    for (int i = 0; i < n; i++) {
        // spaces before stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // hollow stars
        for (int j = 0; j < (2 * i) + 1; j++) {
            if (j == 0 || j == (2 * i)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower half (inverted hollow pyramid)
    for (int i = 0; i < n - 1; i++) {
        // spaces before stars
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        // hollow stars
        for (int j = 0; j < (2 * n) - (2 * i) - 3; j++) {
            if (j == 0 || j == (2 * n) - (2 * i) - 4) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
