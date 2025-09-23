// WAP to read n numbers and print their sum.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers to sum: ";
    cin >> n;

    int sum = 0, val;
    cout << "Enter " << n << " numbers: ";
    for (int i = 1; i <= n; i++) {
        cin >> val;
        sum = sum + val;
    }

    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}
