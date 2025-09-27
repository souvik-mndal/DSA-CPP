// WAP to check whether a number is prime or not.
// A prime number is a natural number greater than 1 that has no divisors
// other than 1 and itself.

// Example 1:
// Input: 7
// Output: Yes (7 is prime)

// Example 2:
// Input: 10
// Output: No (10 is divisible by 2 and 5)

// Example 3:
// Input: 1
// Output: No (1 is not prime)

#include <iostream>
#include <cmath>
using namespace std;
 
string isPrime(int num) {
    if (num <= 1) {
        return "No";  
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return "No";  
        }
    }
    return "Yes";  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Is Prime? " << isPrime(num) << endl;

    return 0;
}
