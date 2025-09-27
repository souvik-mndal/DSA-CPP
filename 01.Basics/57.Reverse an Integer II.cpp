// WAP to reverse a given integer.
// If reversing the integer causes it to go outside the 32-bit signed integer range, return 0.

// Example 1:
// Input: 123
// Output: 321

// Example 2:
// Input: -456
// Output: -654

// Example 3:
// Input: 1534236469 (overflow case)
// Output: 0

#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;

// Function to reverse an integer
int reverse(int x) {
    bool neg = false;

    if (x <= INT_MIN) {
        return 0;
    }
    if (x < 0) {
        neg = true;
        x = abs(x);
    }

    int ans = 0;
    while (x != 0) {
        if (ans > (INT_MAX / 10)) {
            return 0; // Overflow
        }
        ans = ans * 10 + (x % 10);
        x /= 10;
    }

    if (neg) {
        return -ans;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int rev = reverse(num);
    if (rev == 0) {
        cout << "Reversing the number causes overflow." << endl;
    } else {
        cout << "Reversed number: " << rev << endl;
    }

    return 0;
}
