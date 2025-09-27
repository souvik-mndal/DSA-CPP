// WAP to count the number of divisors of a given number.
// A divisor of a number n is a number that divides n exactly without leaving a remainder.

// Example 1:
// Input: 6
// Divisors: 1, 2, 3, 6
// Output: 4

// Example 2:
// Input: 10
// Divisors: 1, 2, 5, 10
// Output: 4

#include <iostream>
using namespace std;
 
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Number of divisors of " << num << " is: " << countDivisors(num) << endl;

    return 0;
}
