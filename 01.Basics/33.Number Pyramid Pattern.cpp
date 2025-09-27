// WAP to read a number n and print a number pyramid pattern of height n.

#include <iostream>
using namespace std;

/*
        1 
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/

int main() {
    int n;
    cout << "Enter the height of the number pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        // Print numbers
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
