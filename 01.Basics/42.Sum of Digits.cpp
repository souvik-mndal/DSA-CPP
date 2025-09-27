// WAP to read a number and calculate the sum of its digits.

// Example:
// Input: 12345
// Output: Sum of digits of 12345 = 15

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int ans = 0;
    int temp = num;

    while (temp != 0) {
        int ld = temp % 10;  
        ans += ld;           
        temp /= 10;          
    }

    cout << "Sum of digits of " << num << " = " << ans << endl;

    return 0;
}
