// WAP to move all zeros in an array to the end while maintaining the order of non-zero elements. BRUTE TC:O(n)  SC:O(n)
//
// Example:
// Input:  nums = [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]
//
// Explanation: All zeros are moved to the end, and non-zero elements remain in the same order.

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);  // initialize with zeros
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            ans[index++] = nums[i];  // copy non-zero elements
        }
    }

    nums = ans;  // assign the modified vector back
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr);

    cout << "Array after moving zeros: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
