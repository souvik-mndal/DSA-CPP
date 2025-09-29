// WAP to find the unique element in an array where every other element appears twice.
//
// Example:
// Input:
// Enter number of elements: 7
// Enter elements: 2 3 5 4 5 3 2
//
// Output:
// Unique element: 4

#include <iostream>
#include <vector>
using namespace std;
 
int findUniqueElement(const vector<int>& nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i]; // XOR of all elements; duplicates cancel out
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int unique = findUniqueElement(nums);
    cout << "Unique element: " << unique << endl;

    return 0;
}
