// WAP to check whether a number is a power of 2 or not.
// A number is a power of 2 if it can be written as 2^k (where k >= 0).
// Example powers of 2: 1, 2, 4, 8, 16, 32, ...

// Example 1:
// Input: 16
// Output: Yes

// Example 2:
// Input: 18
// Output: No

// Example 3:
// Input: 1
// Output: Yes

#include <iostream>
using namespace std;
 
string isPowerOfTwo(int num) {
    if (num == 0) {
        return "No";   
    }
    if ((num & (num - 1)) == 0) {
        return "Yes";  
    }
    return "No";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Is Power of 2? " << isPowerOfTwo(num) << endl;

    return 0;
}
