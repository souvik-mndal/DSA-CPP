// WAP to read a number n and print counting in reverse from n down to 1.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
