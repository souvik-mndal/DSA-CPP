// WAP to find the missing number in an array containing numbers from 0 to N.BRUTE TC:O(n*m) SC:O(1)
// The array has N distinct numbers taken from 0, 1, 2, ..., N, so one number is missing.
//
// Example:
// Input: [3, 0, 1]
// Output: 2
//
// Explanation: N = 3, so the numbers should be 0, 1, 2, 3. Missing number is 2.

#include <iostream>
#include <vector>
using namespace std;

// Function to find the missing number
int missingNumber(vector<int>& nums) {
    for (int i = 0; i <= nums.size(); i++) {
        bool found = false;
        for (int j = 0; j < nums.size(); j++) {
            if (i == nums[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Missing number: " << missingNumber(nums) << endl;

    return 0;
}
