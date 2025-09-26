// WAP to read a number n and print an inverted right-angled triangle pattern of '*' of height n.

/*
* * * * *
* * * *
* * *
* *
*
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
