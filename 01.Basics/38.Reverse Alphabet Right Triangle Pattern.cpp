// WAP to read a number n and print a reverse alphabet triangle of height n.

/*
E 
D E 
C D E 
B C D E 
A B C D E
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the height of the reverse alphabet triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    return 0;
}
