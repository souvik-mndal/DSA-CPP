// WAP to read a number n and print a zig-zag pattern of '*' of height 2n.

/*
*         * 
 *       * 
  *     * 
   *   * 
    * * 
     * 
    * * 
   *   * 
  *     * 
 *       * 
*         * 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the zig-zag pattern: ";
    cin >> n;

    // Upper half
    for (int i = 0; i <= n; i++) {
        // Leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars and spaces
        for (int j = 0; j < n - i + 1; j++) {
            if (j == 0 || j == n - i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars and spaces
        for (int j = 0; j < 2 + i; j++) {
            if (j == 0 || j == i + 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
