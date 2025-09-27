// WAP to read two numbers and find their GCD (Greatest Common Divisor) using the subtraction method.
// GCD of two numbers is the largest number that divides both of them exactly.

// Example 1:
// Input: a = 12, b = 18
// Output: GCD = 6

// Example 2:
// Input: a = 100, b = 25
// Output: GCD = 25

#include <iostream>
using namespace std;
 
int findGCD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;  
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << findGCD(a, b) << endl;

    return 0;
}
