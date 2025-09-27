// WAP to read a number n and print an inverted solid pyramid pattern of '*' of height n.

/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *  
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the inverted pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        // Print stars
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
