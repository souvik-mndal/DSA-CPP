// WAP to check whether a number is a palindrome or not.
// A palindrome number is the one which remains the same when its digits are reversed.
 
// Example 1:
// Input: 121
// Output: Yes
 
// Example 2:
// Input: 123
// Output: No
 
// Example 3:
// Input: 1001
// Output: Yes

#include <iostream>
using namespace std;
 
int reverseNumber(int num) {
    int ans = 0;
    while (num != 0) {
        int ld = num % 10;       
        ans = ans * 10 + ld;     
        num /= 10;               
    }
    return ans;
}
 
string isPalindrome(int num) {
    int rev = reverseNumber(num);
    if (num == rev) {
        return "Yes";
    }
    return "No";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Is Palindrome? " << isPalindrome(num) << endl;

    return 0;
}
