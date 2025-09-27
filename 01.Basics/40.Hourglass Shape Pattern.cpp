// WAP to read a number n and print an hourglass pattern of '*' of height 2n.

/*
**********
 ********
  ******
   ****
    **
    **
   ****
  ******
 ********
**********
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the hourglass: ";
    cin >> n;

    // Upper half (inverted pyramid)
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < (2 * n) - (2 * i); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half (pyramid)
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 0; j < (2 * i) + 2; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
