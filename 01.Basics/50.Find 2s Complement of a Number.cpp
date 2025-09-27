// WAP to find the 2's complement of a given number.
// Explanation:
// 2's complement of a number is obtained by inverting all bits (1's complement)
// and then adding 1 to the result.

// Example 1:
// Input: 5
// Binary of 5 = 0101
// 1's complement = 1010
// 2's complement = 1011 = -5
// Output: -5 

// Example 2:
// Input: -5
// Output: 5

#include <iostream>
using namespace std;
 
int twosComplement(int num) {
    return (~num) + 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "2's complement of " << n << " is: " << twosComplement(n) << endl;

    return 0;
}
