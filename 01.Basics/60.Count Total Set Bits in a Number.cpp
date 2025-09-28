// WAP to count total set bits (1s in binary) from 1 to a given number n.

// Example:
// Input:
// Enter a number: 3

// Output:
// Total set bits from 1 to 3 = 4

// Explanation:
// 1 -> 01 -> 1 set bit
// 2 -> 10 -> 1 set bit
// 3 -> 11 -> 2 set bits
// Total = 1 + 1 + 2 = 4

#include <iostream>
using namespace std;
 
int counting(int n) {
    int cnt = 0;
    while (n != 0) {
        int ld = n % 2;   
        if (ld == 1) {
            cnt++;
        }
        n /= 2;
    }
    return cnt;
}
 
int countTotalSetBits(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += counting(i);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int totalSetBits = countTotalSetBits(n);
    cout << "Total set bits from 1 to " << n << " = " << totalSetBits << endl;

    return 0;
}
