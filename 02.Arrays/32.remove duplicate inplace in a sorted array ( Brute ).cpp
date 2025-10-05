// WAP to remove duplicate elements from an array and return the count of unique elements. BRUTE TC:O(nlogn)+O(n)  SC:O(n)
//
// Example:
// Input:
// 6
// 1 2 2 3 4 4
//
// Output:
// Array after removing duplicates: 1 2 3 4
// Number of unique elements: 4

#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to remove duplicates and return the count of unique elements
int removeDuplicates(vector<int>& nums) {
    set<int> st;
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]);
    }

    int index = 0;
    for (auto it : st) {
        nums[index++] = it;
    }

    return index;
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

    int uniqueCount = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}
