// WAP to check whether a given number is a Narcissistic (Armstrong) number.
// A number is Narcissistic if the sum of its digits raised to the power of
// the number of digits equals the number itself.

// Example 1:
// Input: 153
// Calculation: 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
// Output: Yes

// Example 2:
// Input: 123
// Output: No

#include <iostream>
#include <cmath>
using namespace std;
 
int countDigits(int n) {
    int cnt = 0;
    while (n != 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}
 
string isNarcissistic(int num) {
    int totalDigits = countDigits(num);
    int n = num;
    int sum = 0;

    while (num != 0) {
        int ld = num % 10;             
        sum += pow(ld, totalDigits);   
        num /= 10;
    }

    if (sum == n) {
        return "Yes";
    }
    return "No";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Is Narcissistic? " << isNarcissistic(num) << endl;

    return 0;
}
