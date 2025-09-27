// WAP to read two numbers and find the LCM.
// LCM (Least Common Multiple) is the smallest number divisible by both numbers.

// Example 1:
// Input: a = 12, b = 18
// Output: GCD = 6, LCM = 36

// Example 2:
// Input: a = 7, b = 5
// Output: GCD = 1, LCM = 35

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
  
int findLCM(int a, int b) {
    int hcf = findGCD(a, b);
    return (a * b) / hcf;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM of " << a << " and " << b << " is: " << findLCM(a, b) << endl;

    return 0;
}
