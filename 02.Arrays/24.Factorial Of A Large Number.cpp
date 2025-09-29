// WAP to calculate factorial of a number N and return it as a string
// to handle large values that cannot fit in standard integer types.
//
// Example:
// Input: 5
// Output: 120
//
// Input: 20
// Output: 2432902008176640000

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to calculate factorial as a string
string factorial(int N) {
    string result = "";
    vector<int> ans;
    ans.push_back(1); // initialize factorial as 1

    int carry = 0;
    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < ans.size(); j++) {
            int digit = ans[j] * i + carry;
            ans[j] = digit % 10;
            carry = digit / 10;
        }
        while (carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Convert vector of digits to string
    for (int i = ans.size() - 1; i >= 0; i--) {
        result += (ans[i] + '0');
    }
    return result;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Factorial of " << N << " is: " << factorial(N) << endl;
    return 0;
}
