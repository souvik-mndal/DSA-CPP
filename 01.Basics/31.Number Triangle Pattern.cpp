// WAP to read a number n and print a number triangle pattern of height n.

/*
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the number triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }

    return 0;
}
