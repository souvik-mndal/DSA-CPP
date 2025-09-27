// WAP to read a number n and print a solid pyramid pattern of '*' of height n.

/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        // Print stars
        for (int j = 0; j < (2 * i) + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
