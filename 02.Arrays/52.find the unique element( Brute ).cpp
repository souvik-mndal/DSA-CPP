/*
🔹 WAP to find the single non-repeating element in an array 
   where every other element appears twice. BRUTE TC:O(n*n)

🔹 Approach:
   - For each element, check if it has a duplicate.
   - If no duplicate is found, that element is the unique one.

🔹 Example:
   Input:
   Enter the size of array: 5
   Enter the elements of array: 4 1 2 1 2

   Output:
   The single non-repeating element is: 4
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            bool find = 0;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                else if (nums[i] == nums[j]) {
                    find = 1;
                    break;
                }
            }
            if (!find) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = obj.singleNumber(nums);
    cout << "The single non-repeating element is: " << ans << endl;

    return 0;
}
