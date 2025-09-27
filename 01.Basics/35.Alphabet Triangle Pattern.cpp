// WAP to read a number n and print an alphabet triangle pattern of height n.

#include <iostream>
using namespace std;

/*
A 
A B 
A B C 
A B C D
A B C D E
*/

int main() {
    int n;
    cout << "Enter the height of the alphabet triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
