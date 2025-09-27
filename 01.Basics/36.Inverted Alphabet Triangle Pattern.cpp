// WAP to read a number n and print an inverted alphabet triangle pattern of height n.

#include <iostream>
using namespace std;

/*
A B C D E 
A B C D 
A B C 
A B 
A 
*/

int main() {
    int n;
    cout << "Enter the height of the inverted alphabet triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
