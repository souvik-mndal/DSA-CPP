// WAP to read a number n and print a solid rhombus pattern of '*' with n rows.

/*
    * * * * * 
   * * * * *
  * * * * *
 * * * * *
* * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the rhombus: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
