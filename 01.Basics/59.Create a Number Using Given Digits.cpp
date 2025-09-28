// WAP to create the largest possible number from given digits entered by the user.

// Example 1:
// Input:
// Enter number of digits: 5
// Enter digits: 3 1 4 1 9 
// Output:
// Largest number: 94311

// Example 2:
// Input:
// Enter number of digits: 4
// Enter digits: 7 0 5 6 
// Output:
// Largest number: 7650

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
long long int createLargestNumber(vector<int>& digits) { 
    sort(digits.begin(), digits.end());

    long long int ans = 0; 
    for (int i = digits.size() - 1; i >= 0; i--) {
        ans = ans * 10 + digits[i];
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);
    cout << "Enter digits: ";
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    cout << "Largest number: " << createLargestNumber(digits) << endl;

    return 0;
}
