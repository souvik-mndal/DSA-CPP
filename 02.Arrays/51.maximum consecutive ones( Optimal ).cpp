// WAP to find the maximum number of consecutive 1's in a binary array. OPTIMAL TC:O(n)
// Example:
// Input: 6
//        1 1 0 1 1 1
// Output: 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find maximum consecutive 1's
int findMaxConsecutiveOnes(vector<int>& nums) {
    int largest = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
            largest = max(largest, count);
        } else {
            count = 0;
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements (0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum consecutive 1's: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
