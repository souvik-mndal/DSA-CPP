// WAP to read a number n and print a square pattern of '*' of size n x n.

/*
****
****
****
****
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of square: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
