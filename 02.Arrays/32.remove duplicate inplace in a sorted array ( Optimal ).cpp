// WAP to remove duplicates from a sorted array in-place and return the count of unique elements. TC:O(n) SC:O(1)
//
// Example:
// Input:
// 6
// 1 1 2 2 3 3
//
// Output:
// Array after removing duplicates: 1 2 3
// Number of unique elements: 3

#include <iostream>
#include <vector>
using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int l = 0, r = 1;
    while (r < nums.size()) {
        if (nums[l] != nums[r]) {
            nums[l + 1] = nums[r];
            l++;
        }
        r++;
    }
    return l + 1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int uniqueCount = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}
