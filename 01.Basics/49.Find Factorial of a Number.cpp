// WAP to find the factorial of a given number.
// Factorial of a number n (written as n!) is the product of all positive integers ≤ n.
// Formula: n! = n × (n-1) × (n-2) × ... × 1

// Example 1:
// Input: 5
// Output: 120   (5! = 5×4×3×2×1)

// Example 2:
// Input: 0
// Output: 1     (By definition, 0! = 1)

#include <iostream>
using namespace std;
 
unsigned long long factorial(int num) {
    unsigned long long ans = 1;
    for (int i = 2; i <= num; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    return 0;
}
