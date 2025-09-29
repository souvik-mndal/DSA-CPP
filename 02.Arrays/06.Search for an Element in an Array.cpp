// WAP to search for an element in an array.
// If the element is found, return its index (0-based).
// If not found, return -1.

// Example:
// Input:
// Enter number of elements: 5
// Enter elements: 10 20 30 40 50
// Enter target element: 30

// Output:
// Element found at index: 2

#include <iostream>
#include <vector>
using namespace std;
 
int searchElementInArray(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int result = searchElementInArray(nums, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
