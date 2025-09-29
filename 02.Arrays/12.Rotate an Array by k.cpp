// WAP to rotate an array to the right by k steps.
//
// Example:
// Input:
// Enter number of elements: 7
// Enter elements: 1 2 3 4 5 6 7
// Enter k: 3
//
// Output:
// Rotated array: 5 6 7 1 2 3 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void rotate(vector<int>& nums, int k) {
    k = k % nums.size(); // handle cases where k > n
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
