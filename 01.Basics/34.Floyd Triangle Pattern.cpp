// WAP to read a number n and print Floyd's Triangle of n rows.

#include <iostream>
using namespace std;

/*
1 
2 3 
4 5 6 
7 8 9 10
*/

int main() {
    int n;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> n;

    int val = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << val++ << " ";
        }
        cout << endl;
    }

    return 0;
}
