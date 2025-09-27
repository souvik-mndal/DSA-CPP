// WAP to set the k-th bit of a given number n.
// Bits are numbered from 0 (least significant bit).
// Setting a bit means changing it to 1.

// Example 1:
// Input: n = 5 (binary 0101), k = 1
// Output: 7 (binary 0111)

// Example 2:
// Input: n = 8 (binary 1000), k = 0
// Output: 9 (binary 1001)

#include <iostream>
using namespace std;
 
int setKthBit(int n, int k) {
    return n | (1 << k);
}

int main() {
    int n, k;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit position to set (0-indexed): ";
    cin >> k;

    int result = setKthBit(n, k);
    cout << "Number after setting " << k << "-th bit: " << result << endl;

    return 0;
}
