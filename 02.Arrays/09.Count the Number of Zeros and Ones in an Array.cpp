// WAP to count the number of 0s and 1s in an array.
//
// Example:
// Input:
// Enter number of elements: 6
// Enter elements: 0 1 1 0 0 1
//
// Output:
// Number of 0s = 3
// Number of 1s = 3

#include <iostream>
#include <vector>
using namespace std;
 
pair<int, int> countZerosAndOnes(const vector<int>& nums) {
    int zero = 0, one = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            zero++;
        } else if (nums[i] == 1) {
            one++;
        }
    }
    return {zero, one};
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements (only 0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    pair<int, int> result = countZerosAndOnes(nums);
    cout << "Number of 0s = " << result.first << endl;
    cout << "Number of 1s = " << result.second << endl;

    return 0;
}
