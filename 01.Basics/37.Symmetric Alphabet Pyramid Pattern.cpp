// WAP to read a number n and print a symmetric alphabet pyramid of height n.

#include <iostream>
using namespace std;

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

int main() {
    int n;
    cout << "Enter the height of the symmetric alphabet pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A';

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print increasing letters
        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }

        ch -= 2; // Adjust for decreasing sequence

        // Print decreasing letters
        for (int j = 0; j < i; j++) {
            cout << ch--;
        }

        cout << endl;
    }

    return 0;
}
