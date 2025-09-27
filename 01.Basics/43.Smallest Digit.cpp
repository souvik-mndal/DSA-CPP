// WAP to read a number and find the smallest digit.
 
// Example:
// Input: 57329
// Output: Smallest digit in 57329 = 2

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int ans = INT_MAX;
    int temp = num;

    while (temp != 0) {
        int ld = temp % 10;        
        ans = min(ans, ld);        
        temp /= 10;               
    }

    cout << "Smallest digit in " << num << " = " << ans << endl;

    return 0;
}
