// WAP to move all zeros in an array to the beginning while maintaining the order of other elements.

// Example:
// Input:
// Enter number of elements: 6
// Enter elements: 1 0 2 0 3 4

// Output:
// Array after moving zeros: 0 0 1 2 3 4

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> moveZerosToFront(vector<int>& nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    return nums;
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

    vector<int> result = moveZerosToFront(nums);

    cout << "Array after moving zeros: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
