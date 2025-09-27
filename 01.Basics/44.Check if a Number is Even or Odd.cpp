// WAP to read a number and check whether it is Even or Odd.
 
// Example 1:
// Input: 7
// Output: 7 is Odd
 
// Example 2:
// Input: 10
// Output: 10 is Even

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num & 1) {    
        cout << num << " is Odd" << endl;
    } 
    else {
        cout << num << " is Even" << endl;
    }

    return 0;
}
