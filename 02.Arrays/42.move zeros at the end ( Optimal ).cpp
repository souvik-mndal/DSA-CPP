// WAP to move all zeros in an array to the end while maintaining the relative order of non-zero elements. OPTIMAL TC:O(n)
//
// Example:
// Input:  nums = [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]
//
// Explanation: The non-zero elements stay in their original order, and all zeros are moved to the end.

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int l = -1;
    
    // Find the first zero index
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            l = i;
            break;
        }
    }

    // If no zero found, array is already fine
    if (l == -1) return;

    // Move non-zero elements ahead
    for (int i = l + 1; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[l++]);
        }
    }
}

int main() {
    // Example demonstration
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums);

    cout << "Array after moving zeros: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
