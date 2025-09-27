// WAP to read a number and print its reverse.
 
// Example 1:
// Input: 1234
// Output: 4321

// Example 2:
// Input: 560
// Output: 65

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int ans = 0;
    while (num != 0) {
        int ld = num % 10;       
        ans = ans * 10 + ld;     
        num /= 10;               
    }

    cout << "Reversed number: " << ans << endl;

    return 0;
}
