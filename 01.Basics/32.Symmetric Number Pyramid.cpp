// WAP to read a number n and print a symmetric number pattern of height n.

/*
1        1
12      21
123    321
1234  4321
1234554321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the pattern: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val = 1;

        // Increasing numbers
        for (int j = 0; j <= i; j++) {
            cout << val++;
        }

        // Spaces in the middle
        for (int j = 0; j < (2 * n) - (2 * i) - 2; j++) {
            cout << " ";
        }

        val--; // Adjust value for decreasing sequence

        // Decreasing numbers
        for (int j = 0; j <= i; j++) {
            cout << val--;
        }

        cout << endl;
    }

    return 0;
}
