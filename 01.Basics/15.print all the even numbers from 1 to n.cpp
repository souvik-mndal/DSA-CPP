// WAP to read a number n and print all even numbers from 1 to n.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i;
        if (i + 2 <= n) {
            cout << " "; // Add a space between numbers
        }
    }

    cout << endl;
    return 0;
}
