/*
🔹 WAP to find the single non-repeating element in an array 
   where every other element appears twice. OPTIMAL TC:O(n)

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
#include <map>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) { 
    int ans = 0;
    for( int i=0 ; i<nums.size() ; i++ ){
        ans ^= nums[i];
    }
    return ans;
}

int main() { 
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = singleNumber(nums);
    cout << "The single non-repeating element is: " << ans << endl;

    return 0;
}
